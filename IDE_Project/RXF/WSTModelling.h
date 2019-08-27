
#ifndef WSTMODELLING_H 
#define WSTMODELLING_H 
 

#define FIRE_S(SOURCE,DESTINATION,EVENT)	WST_EVT_gen( SOURCE, &DESTINATION, EVENT )

#define FIRE(DESTINATION,EVENT)				FIRE_S( me, DESTINATION, EVENT )
#define FIRE_SINGLETON						FIRE_S

/* For EA the events are not dynamically allocated, so FIRE_ISR can just be mapped to FIRE. */
#define FIRE_ISR							FIRE
#define FIRE_ISR_S							FIRE_S
#define FIRE_ISR_SINGLETON					FIRE_S


#endif /* WSTMODELLING_H */ 
