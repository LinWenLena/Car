#ifdef WST_H

#ifndef WSTEVTQUEUE_H
#define WSTEVTQUEUE_H

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
* $Id: WST_MSQ.h 30194 2014-09-30 12:18:33Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/RXF/OORTX/Source/C/WST_MSQ.h $
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


struct WST_MSQ_t
{
	/** 
	  * \brief Pointer to the first Event in the msg queue.
	  * \req{RXF-776}
	  */ 
	WST_EVT*				eventHead;
	
	/** 
	  * \brief Pointer to the first Event in the msg queue.
	  * \req{RXF-1045}
	  */ 
	WST_EVT*				eventTail;
	
};

/** 
  * \brief Singelton object from the message queue.
  * \req{RXF-821}
  */ 
extern WST_MSQ mainMSQ;

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






/* Operations */

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


/** 
  * \brief Removes an Event with a specific destination and event ID from the message que.
  * \req{RXF-800} 
  */
void WST_MSQ_cancelEvents(const WST_FSM*  destination, WST_EVT_ID_t id);

/** 
  * \brief Get an event from the event queue. This operation masks the interrupts since it could be called from an ISR routine.
  * \req{RXF-788} \req{RXF-789}
  */
WST_EVT* WST_MSQ_get(void);

/* 
 */
/** 
  * \brief Put an event onto the event queue.This operation could be called from an ISR routine and so it masks the interrupts.
  * \req{RXF-794} \req{RXF-795}
  */
void WST_MSQ_put(WST_EVT* event);

/** 
  * \brief Initializes the message queue object.
  * \req{RXF-777} \req{RXF-778}
  */
void WST_MSQ_init(void);

/** 
  * \brief Returns WSTTRUE, if the message queue contains events otherwise WSTFALSE.
  * \req{RXF-797}
  */
WSTBoolean WST_MSQ_isEmpty(void);
                                                                                                                                      

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif /* of WSTEVTQUEUE_H */

#endif /* WST_H */
