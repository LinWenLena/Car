#ifdef WST_H

#ifndef WSTEVENT_H
#define WSTEVENT_H

/**
* \brief Representing a single event (can also be a timeout event).
* \class WST_EVT
*
* Events are asynchronous messages which are handled by the RXF event based scheduler.
* Usually events are dynamicly allocared and freed, but also static events which do not
* get destroyed are supported. They are used when events are being generated from an
* interrupt servoce routine. 
*
* Willert Software Tools - Realtime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_EVT.h 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_EVT.h $
*
**/


/*****************************************************************************
 *
 * This file belongs to the Willert Software Tools RXF Product:  
 * EA_C_OORTX_Keil_ARM_MCB1700_Dev (2014-11-14).
 * Copyright (c) 2011, Willert Software Tools GmbH.
 *
 * For detailed information about this product see release info file:
 * C:/Willert/EA_C_OORTX_Keil_ARM_MCB1700_Dev/ReleaseInfo.txt
 *
 *****************************************************************************/


/** \brief Possible statuses as result of handling an event. 
  * \req{RXF-150}
  */
typedef enum WST_EVT_handleEventStatus_t {
	WST_EVT_handleEventNotConsumed = 0,		/**< The event could not be consumed, e.g. because the
												 receiving object is not in a state which handles
												 that event.										*/
	WST_EVT_handleEventError = 1,			/**< An error occurred during event handling.			*/
	WST_EVT_handleEventConsumed = 2,		/**< Handling of the event was performed succesfull.	*/
	WST_EVT_handleEventCompleted = 3,		/**< The same as \see WST_EVT_handleEventConsumed.		*/
	WST_EVT_handleEventInCleanup = 4,		/**< The receiving object is already in cleanup.		*/
	WST_EVT_handleEventReachTerminate = 5	/**< The receiving object has already reached it's
												 terminated state.									*/
} WST_EVT_handleEventStatus;


/** \brief Represent a function pointer which is used by events when they are destroyed.
  * \req{RXF-1245}
  */
typedef void 		    (*WST_EVT_destroy_f)(void * const event);


/** For a highly optimized performance the RXF may cast a WST_EVT structure pointer to \see WST_TMR to
 * access certain attributes. Thus the order of attributes may not be freely changed.
 */
struct WST_EVT_t
{
	/** \brief WST_FSM object that the event is	destined for. 
	  * \req{RXF-684}
	  */
	WST_FSM*				destination;

	/** \brief Destroy function	pointer, important for dynamic vs. static memory allocation. 
	  * \req{RXF-685}
	  */
	WST_EVT_destroy_f		eventDestroy_f;

	/** \brief Identifier of the event.	
	  * \req{RXF-686}
	  */
	WST_EVT_ID_t			id;

	/** \brief TRUE, if	the	event is static	and	should not be deleted after	consumption. 
	  * \req{RXF-687}
	  */
	WSTBoolean				isStatic;

#ifndef WST_PORTS_DISABLED

	/** \brief "port stamp": the address of	the	port through which the event was sent, if ports	are	supported and enabled. 
	  * \req{RXF-688}
	  */
	void					*port;

#endif /* WST_PORTS_DISABLED */

		
	/** \brief next	Pointer	to the next	Event in the event queue 
	  * \req{RXF-689}
	  */
	WST_EVT					*next;





};



/***********************************************/
/**           Definition of event ids		  **/
/***********************************************/

/** \brief Null event id, used to trigger null-transisions (which do not have a trigger specified). 
  * \req{RXF-694}
  */
#define WST_EVT_Null_id         ((WST_EVT_ID_t)-1)

/** \brief The identifier of all timeout events. 
  * \req{RXF-695}
  */
#define WST_TMR_id   	        ((WST_EVT_ID_t)-2)	

/** \brief An event which has to be deleted will get this identifier assigned. 
  * \req{RXF-696}
  */
#define WST_EVT_delete_id   	((WST_EVT_ID_t)-3)	

/** \brief A timeout event which has to be deleted will get this identifier assigned. 
  * \req{RXF-697}
  */
#define WST_TMR_delete_id  		((WST_EVT_ID_t)-4)

/** \brief Identifier of the start behavior event, only for Rhapsody compatibility 
  * \req{RXF-698}
  */
#define WSTStartBehavior_id     ((WST_EVT_ID_t)-5)


 
#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/** \brief Checks if an event was sent via a port.
  * 
  */
WSTBoolean WST_EVT_isPort( const WST_EVT *const me, const void* portAddress );

/** \brief Cleans up the event object.
  * \req{RXF-699}
  */
void WST_EVT_cleanup( WST_EVT* const me );

/** \brief Destroy the event object.
  * \req{RXF-700}
  */
void WST_EVT_destroy( WST_EVT* const me );

/** \brief Initializes the event object.
  * \req{RXF-701}
  */
void WST_EVT_init( WST_EVT* const me, WST_EVT_ID_t eventId, WST_FSM* destinationFSM );

/** \brief Mark the event object to be deleted after it has been consumed.
  * \req{RXF-703}
  */
void WST_EVT_setStatic( WST_EVT* const me, WSTBoolean isStatic );

void WST_EVT_gen( void* source, struct WST_FSM_t* destinationFSM, WST_EVT_ID_t id );

/** \brief Marks an event to be cancelled
  * \req{RXF-705}
  */
WSTBoolean WST_EVT_toBeCancelled( const WST_EVT* const me , const WST_FSM*  destination, WST_EVT_ID_t id );

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif /* of WSTEVENT_H */

#endif /* WST_H */
