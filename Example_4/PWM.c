#include "LPC17xx.H"                         /* LPC17xx definitions           */
#include "PWM.h"
#include "system_LPC17xx.h"

void PWM_Init(){
	LPC_PINCON->PINSEL4 = 0x0000155A; /* setGPIOs forall PWM pinson PWM */
  LPC_PWM1->TCR = 0x00000002; /* TCR_RESET-Counter Reset*/
  LPC_PWM1->PR = 0x00;/* countfrequency:Fpclk*/
  LPC_PWM1->MCR = (1 << 0); /* PWMMR0I-interrupton PWMMR0, reseton PWMMR0, resetTC ifPWM matches*/
  LPC_PWM1->LER = (1 << 0) | (1 << 3) | (1 << 4); /* all PWM latchenabled*/
}

void PWM_set( int channel, int offset) {
  LPC_PWM1->MR0 = 500000; /* setPWM cycle*/
  if(0 == channel)
		LPC_PWM1->MR3 = offset; // Motor
  if(1 == channel)
  LPC_PWM1->MR4 = offset; // Lenkung
  LPC_PWM1->LER = (1 << 0) | (1 << 3) | (1 << 4); // LatchEnableRegister
  LPC_PWM1->PCR = (1 << 11) | (1 << 12);// PWM Control Register
  LPC_PWM1->TCR = 0x00000001 | 0x00000008; // TimerControl Register: Counter enablePWM enable
}