/**
* \ingroup runtime
* \class WST_MSQ
* \brief Message queue handling the list of events.
*
* Stores events (timeouts as well as asynchronous messages) in a list.
* The OO-RTX does not have active tasks and will handle all event
* scheduling with one event queue.
*
* It is implemented via a simple fixed size FIFO.
* The put operation adds an event to the head of the queue, while
* the get operation removes an event from the tail of the queue.
*
* In addition to the array, this is managed for fast access via head and tail
* pointers and actual count of events.
*
* Willert Software Tools - Realtime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_MSQ.c 29010 2014-04-01 15:29:18Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/RXF/OORTX/Source/C/WST_MSQ.c $
*
**/

/*****************************************************************************
 *
 * This file belongs to the Willert Software Tools RXF Product:  
 * EA_C_OORTX_Keil_ARM_MCB1700_Dev (2014-11-14).
 * Copyright (c) 2013, Willert Software Tools GmbH.
 *
 * For detailed information about this product see release info file:
 * C:/Willert/EA_C_OORTX_Keil_ARM_MCB1700_Dev/ReleaseInfo.txt
 *
 *****************************************************************************/


#include "WST.h"



#if 	WST_NEARD_ADDRESS_SIZE == 16
#define WST_RXF_RUNNING_START_SEC_DATA_NOINIT_16_FAST
#elif 	WST_NEARD_ADDRESS_SIZE == 24
#define WST_RXF_RUNNING_START_SEC_DATA_NOINIT_24_FAST
#elif 	WST_NEARD_ADDRESS_SIZE == 32
#define WST_RXF_RUNNING_START_SEC_DATA_NOINIT_32_FAST
#else
#define WST_RXF_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#endif
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_MSQ						mainMSQ;

#if 	WST_NEARD_ADDRESS_SIZE == 16
#define WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_16_FAST
#elif 	WST_NEARD_ADDRESS_SIZE == 24
#define WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_24_FAST
#elif 	WST_NEARD_ADDRESS_SIZE == 32
#define WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_32_FAST
#else
#define WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#endif
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief cancel all events for a certain destination
*
* Deletes all events for a certain destination (if id == 0) or only the events with the 
* specified Id. Is not critical because it can not be interrupted by the consume function
* (which is not pre-emptive) and an interrupt can send an event but this will be added 
* to the head function. Hence the LclHead copy.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_MSQ_cancelEvents(const WST_FSM*  destination, WST_EVT_ID_t id )
{
	WST_EVT* anEvent = mainMSQ.eventHead;
	WST_EVT* parent = NULL;

	/* Now check every element */
	while(anEvent != NULL){
		if( ( anEvent->destination == destination ) && ( (id == 0) || (id == anEvent->id) ) )
		{
			WST_EVT* tmpNextEvent;
			
			if(parent == NULL)
			{
				mainMSQ.eventHead = anEvent->next;
				if(mainMSQ.eventHead == NULL)
				{
					mainMSQ.eventTail = NULL;
				}
			}
			else
			{
				parent->next = anEvent->next;
				if( anEvent == mainMSQ.eventTail){
					mainMSQ.eventTail = parent;
				}
			}
			tmpNextEvent = anEvent->next;
			
			WST_MEM_returnMemory( anEvent );
			
			anEvent = tmpNextEvent;
		}
		else
		{
			parent = anEvent;
			anEvent = anEvent->next;
		}
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Gets an event from the queue.
* \return a pointer to the event
*
* Gets an event from the event structure. The event structure will be
* updated to make room for new events, the event itself is returned.
* Care must be taken to avoid race conditions, hence the critical region calls.
*/


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_EVT* WST_MSQ_get(void)
{
	WST_EVT*                  anEvent;

	/* get the event from the head of the queue */
	anEvent = mainMSQ.eventHead;
	if( anEvent != NULL )
	{

#ifdef WST_TARGET_SAVEISRMASK

		isrmask_t							mask;

		mask = WSTTarget_enterCriticalRegion();

#else

		WSTTarget_enterCriticalRegion();

#endif	/* WST_TARGET_SAVEISRMASK */

	    /* Clear out the container */
		if(anEvent != NULL){
			mainMSQ.eventHead = anEvent->next;
		}
		if(mainMSQ.eventHead == NULL){
			mainMSQ.eventTail = NULL;
		}

#ifdef WST_TARGET_SAVEISRMASK

    	WSTTarget_exitCriticalRegion( mask );

#else

    	WSTTarget_exitCriticalRegion();

#endif	/* WST_TARGET_SAVEISRMASK */
	
	}

    return anEvent;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Returns WSTTRUE, if the message queue contains no events.
* \return WSTTRUE, if the message queue contains no events, WSTFALSE otherwise
*/
#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WSTBoolean WST_MSQ_isEmpty(void)
{
	return ( mainMSQ.eventHead == NULL );
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


/**
* \relates WST_MSQ
* \brief Initializes the message queue object.
*
* Initialises the global event structure. It is an array where, for speed, next pointers are
* implemented. In this way, there is no Modulo operation needed (which is too long to block IRQ's)
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_MSQ_init(  void )
{
    mainMSQ.eventHead = NULL;
	mainMSQ.eventTail = NULL;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \relates WST_MSQ
* \brief Puts an event in the event structure
*
* Puts an event in the structure. the structure is updated and care has been taken
* to avoid race conditions, hence the critical region calls
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_MSQ_put( WST_EVT*  event )
{
	WST_EVT* anEvent;
	/* Insert the event at the tail of the queue */
	event->next = NULL;
	
#ifdef WST_TARGET_SAVEISRMASK
	isrmask_t							mask;

	mask = WSTTarget_enterCriticalRegion();
#else
	WSTTarget_enterCriticalRegion();
#endif	/* WST_TARGET_SAVEISRMASK */
	
	anEvent = mainMSQ.eventTail;

	mainMSQ.eventTail = event;

#ifdef WST_TARGET_SAVEISRMASK
    WSTTarget_exitCriticalRegion( mask );
#else
	WSTTarget_exitCriticalRegion();
#endif	/* WST_TARGET_SAVEISRMASK */

	if( anEvent == NULL )
	{
		mainMSQ.eventHead = event;
	}
	else
	{
		anEvent->next = event;
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */
