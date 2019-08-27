/*----------------------------------------------------------------------------
 * Name:    Example3.c
 * Purpose: MCB1700  - LED-Counter + LCD-Display + AD-Converter
 * Note(s):
 *---------------------------------------------------------------------------*/
#include <stdio.h>																			                     
#include "LEDs.h"
#include "GLCD.h"
#include "ADC.h"	
#include "LPC17xx.h"

/*----------------------------------------------------------------------------
  Main Program
 *----------------------------------------------------------------------------*/
int main (void) {
  short i=0;
  long j=0 , advalue;
  unsigned char str[20];
	int ADCValue[5];

  SystemInit();
//  SysTick_Config(SystemFrequency/100);  /* Generate interrupt each 10 ms      */
  LED_init();                           /* LED Initialization    */
  GLCD_Init();							/* LCD - Display Initialisation */
  ADC_Init();							/* A/D-Converter Initialisation */


  GLCD_Clear  (Red); 
  GLCD_SetTextColor (White);
  GLCD_SetBackColor (Red);
  GLCD_DisplayString (1, 1, 1, "Example 2");
	
	//ADC_StartCnv();
	
  while (1) {                           /* Loop forever                       */

  if (j++>10000000) 
	{
    j = 0;
	  i &= 0x00FF;
	  LED_Out (i++);
	  sprintf (str,"Count = %i",i);
	  GLCD_DisplayString (2, 1, 1, str);

	  advalue = ADC_GetCnv(ADCValue);
	  sprintf (str,"A/D = %4.4i",ADCValue[0]);
		
		GLCD_DisplayString (3, 1, 1, str);
		sprintf (str,"A/D = %4.4i",ADCValue[1]);
		GLCD_DisplayString (4, 1, 1, str);
		sprintf (str,"A/D = %4.4i",ADCValue[2]);
		GLCD_DisplayString (5, 1, 1, str);
		sprintf (str,"A/D = %4.4i",ADCValue[3]);
		GLCD_DisplayString (6, 1, 1, str);
		sprintf (str,"A/D = %4.4i",ADCValue[4]); 
    GLCD_DisplayString (7, 1, 1, str);		
    }
  }
}
