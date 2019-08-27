/*----------------------------------------------------------------------------
 * Name:    ADC.c
 * Purpose: low level ADC functions
 * Note(s): possible defines select the used ADC interface:
 *            __ADC_IRQ   - ADC works in Interrupt mode
 *                        - ADC works in polling mode (default)
 *----------------------------------------------------------------------------
 * This file is part of the uVision/ARM development tools.
 * This software may only be used under the terms of a valid, current,
 * end user licence from KEIL for a compatible version of KEIL software
 * development tools. Nothing else gives you the right to use this software.
 *
 * This software is supplied "AS IS" without warranties of any kind.
 *
 * Copyright (c) 2008-2011 Keil - An ARM Company. All rights reserved.
 *----------------------------------------------------------------------------*/

#include "LPC17xx.H"                         /* LPC17xx definitions           */
#include "ADC.h"
#include "system_LPC17xx.h"
uint16_t AD_last;                            /* Last converted value          */
uint8_t  AD_done = 0;                        /* AD conversion done flag       */

/*----------------------------------------------------------------------------
  Function that initializes ADC
 *----------------------------------------------------------------------------*/
void ADC_Init (void) {
	int pclkdiv, pclk,i;
	int ADC_CLK = 1000000;
	
	LPC_SC->PCONP |= (1 << 12); // Power einschalten
  /* ADC Pins als Input konfigurieren */
  LPC_PINCON->PINSEL1 |= (1U<<14); /* ADC0 */
  LPC_PINCON->PINSEL1 |= (1U<<16); /* ADC1 */
  LPC_PINCON->PINSEL1 |= (1U<<18); /* ADC2 */
  LPC_PINCON->PINSEL1 |= (1U<<20); /* ADC3 */
  LPC_PINCON->PINSEL3 |= (3U<<28); /* ADC4 */
  LPC_PINCON->PINSEL3 |= (3U<<30); /* ADC5 */
  LPC_PINCON->PINSEL0 |= (2U<<6); /* ADC6 */
  LPC_PINCON->PINSEL0 |= (2U<<4); /* ADC7 */
	
	for (i = 0; i < 5000000; i++);
  
	
	/* By default, the PCLKSELxvalue is zero, thus, the PCLK(portclock) for all the peripherals is 1/4 of the SystemCoreClock. Bit 24~25 is for ADC */
  pclkdiv= (LPC_SC->PCLKSEL0 >> 24) & 0x03;
  switch(pclkdiv) {
  case 0x00:
  default:
  pclk= SystemCoreClock/ 4;
  break;
  case 0x01:
  pclk= SystemCoreClock;
  break;
  case 0x02:
  pclk= SystemCoreClock/ 2;
  break;
  case 0x03:
  pclk= SystemCoreClock/ 8;
  break;
}
  LPC_ADC->ADCR = (0x01 << 0) | /* SEL=1,select channel 0~7 on ADC0 */
  ((pclk/ ADC_CLK -1) << 8) | (0 << 16) |/* BURST = 0, softwarecontrolled*/
  (0 << 17) | /* CLKS = 0, 11 clocks/10 bits */
  (1 << 21) | /* PDN = 1, normal operation*/
  (0 << 24) | /* START = 0 A/D conversion stops */
  (0 << 27); /* EDGE = 0 falling,triggerA/D */
  /* Start bits need to be zero before BURST mode can be set. */
  if (LPC_ADC->ADCR & (0x7 << 24)) {
  LPC_ADC->ADCR &= ~(0x7 << 24);
  }
  LPC_ADC->ADCR &= ~0xFF;
  /* Read all channels, 0 through 7. */
  LPC_ADC->ADCR |= 0xFF;
  LPC_ADC->ADCR |= (0x1 << 16); /* Set burst mode and start A/D convert */
}


/*----------------------------------------------------------------------------
  start AD Conversion
 *----------------------------------------------------------------------------*/
  int ADC_StartCnv (void) {
	int adwert;
	
  LPC_ADC->ADCR &= ~( 7 << 24);              /* stop conversion               */
  LPC_ADC->ADCR |=  ( 1 << 24);              /* start conversion              */
}


/*----------------------------------------------------------------------------
  stop AD Conversion
 *----------------------------------------------------------------------------*/
void ADC_StopCnv (void) {

  LPC_ADC->ADCR &= ~( 7 << 24);              /* stop conversion               */
}


/*----------------------------------------------------------------------------
  get converted AD value
 *----------------------------------------------------------------------------*/
uint16_t ADC_GetCnv (int ADCValue[5]) {
	int adwert;
  while (!(LPC_ADC->ADGDR & (1UL<<31))); /* Wait for Conversion end */
	ADCValue[0] = (LPC_ADC->ADDR0 >> 4) & 0xFFF;
  ADCValue[1] = (LPC_ADC->ADDR1 >> 4) & 0xFFF;
  ADCValue[2] = (LPC_ADC->ADDR2 >> 4) & 0xFFF;
  ADCValue[3] = (LPC_ADC->ADDR3 >> 4) & 0xFFF;
  ADCValue[4] = (LPC_ADC->ADDR5 >> 4) & 0xFFF;
//fahren mit hammerkopf
  if(ADCValue[2] < 0x0250) {
  adwert= 0; // mitte
  } else if (ADCValue[1] < 0x0250) {
  adwert= 1; // leicht rechts
  } else if (ADCValue[3] < 0x0250) {
  adwert= 2; //leicht links
  } else if (ADCValue[0] < 0x0250) {
  adwert= 3; //stark rechts
  } else if (ADCValue[4] < 0x0250) {
  adwert= 4; //stark links
  }
	return (adwert);
}


/*----------------------------------------------------------------------------
  A/D IRQ: Executed when A/D Conversion is done
 *----------------------------------------------------------------------------*/
#ifdef __ADC_IRQ
void ADC_IRQHandler(void) {
  volatile uint32_t adstat;

  adstat = LPC_ADC->ADSTAT;		             /* Read ADC clears interrupt     */

  AD_last = (LPC_ADC->ADGDR >> 4) & ADC_VALUE_MAX; /* Store converted value   */

  AD_done = 1;
}
#endif
