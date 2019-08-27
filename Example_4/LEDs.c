#include "LPC17xx.H"                    /* LPC17xx definitions                */


#define LED_NUM     8                   /* Number of user LEDs                */
const unsigned long led_mask[] = { 1UL<<28, 1UL<<29, 1UL<<31, 1UL<< 2,
                                   1UL<< 3, 1UL<< 4, 1UL<< 5, 1UL<< 6 };


	/*----------------------------------------------------------------------------
  Function that initializes ADC
 *----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
  Function that initializes LEDs
 *----------------------------------------------------------------------------*/
void LED_init(void) {
  LPC_GPIO1->FIODIR = 0xB0000000;       /* LEDs on PORT1 defined as Output    */
  LPC_GPIO2->FIODIR = 0x0000007C;       /* LEDs on PORT2 defined as Output    */
}

/*----------------------------------------------------------------------------
  Function that turns on requested LED
 *----------------------------------------------------------------------------*/
void LED_On (unsigned int num) {

  if (num < 3) LPC_GPIO1->FIOPIN |= led_mask[num];
  else         LPC_GPIO2->FIOPIN |= led_mask[num];
}

/*----------------------------------------------------------------------------
  Function that turns off requested LED
 *----------------------------------------------------------------------------*/
void LED_Off (unsigned int num) {

    if (num < 3) LPC_GPIO1->FIOPIN &= ~led_mask[num];
    else         LPC_GPIO2->FIOPIN &= ~led_mask[num];
}

/*----------------------------------------------------------------------------
  Function that outputs value to LEDs
 *----------------------------------------------------------------------------*/
void LED_Out(unsigned int value) {
  int i;

  for (i = 0; i < LED_NUM; i++) {
    if (value & (1<<i)) {
      LED_On (i);
    } else {
      LED_Off(i);
    }
  }
}
