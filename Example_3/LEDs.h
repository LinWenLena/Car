#ifndef __LEDs_H
#define __LEDs_H

#define LED_NUM     8                   /* Number of user LEDs                */


extern void LED_init(void);
extern void LED_On (unsigned int num);
extern void LED_Off (unsigned int num);
extern void LED_Out(unsigned int value);

#endif /* __LEDs_H */
