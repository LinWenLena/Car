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
* $Id: WST_EVT.c 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_EVT.c $
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


#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



#ifndef WST_PORTS_DISABLED


/**
* \brief Checks if an event was sent via a port.
* \param me Pointer to the event
* \param portAddress the port
* \return TRUE if the event was sent via the port
*
* Called to check if an event was sent via a port.
*
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WSTBoolean WST_EVT_isPort( const WST_EVT *const me, const void* portAddress )
{
	WSTBoolean res = WSTFALSE;
	
	if (me != NULL)
	{
		res = (me->port == portAddress);
	}
	return res;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#endif /* WST_PORTS_DISABLED */


/**
* \brief Cleans up the event object.
* \param me Pointer to the event
*
* Called to clean event structures.
*
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_EVT_cleanup(WST_EVT* const me)
{
/*lint -save -e613 -e831	Possible use of null pointer, Reference cited in prior message */

    /* Check the me pointer */
    if ( NULL == me )
    {
    	WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
    }
/*lint -restore */
	else
	{
		me->id                 	= WST_EVT_Null_id;
		me->destination         = NULL;
		me->eventDestroy_f      = (WST_EVT_destroy_f) NULL;
		me->isStatic  			= WSTFALSE;
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Mark the event object to be deleted after it has been consumed.
* \param me Pointer to the event
* \param doDelete Boolean: TRUE if to be deleted, FALSE if not
*
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_EVT_setStatic(WST_EVT* const me, WSTBoolean isStatic)
{
        me->isStatic = isStatic;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Destroy the event object.
* \param me Pointer to the event
*
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_EVT_destroy(WST_EVT* const me)
{
/*lint -save -e613 -e831	Possible use of null pointer, Reference cited in prior message */

	/* Check the me pointer */
	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
/*lint -restore */
	else
	{
		/* The event does not have to be "cleaned" here, that is already done in
		 * the event routine itself. Furthermore it leads to errors since
		 * the introduction of events that can be called from interrupts.
		 * REMOVED: --->   WST_EVT_cleanup(me);
		 */

		if ( me->isStatic == WSTFALSE )
		{
#ifdef WST_MODELLING_RPY 
			if( me->eventDestroy_f != NULL )
			{
				me->eventDestroy_f((void*)me);
			}
#else /* WST_MODELLING_RPY */
			WST_MEM_returnMemory( me );
#endif /* WST_MODELLING_RPY */
		}
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Initializes the event object.
* \param me Pointer to the event
* \param eventId Event ID to store.
* \param destinationFSM Destination to store.
*
* Generally when events get created, we don't always have control of the arguments,
* we need to reinitialise it with this operation.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_EVT_init( WST_EVT* const me, WST_EVT_ID_t eventId, WST_FSM* destinationFSM )
{
/*lint -save -e613 -e831	Possible use of null pointer, Reference cited in prior message */

	/* Check the me pointer */
    if( me == NULL )
    {
    	WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
    }
/*lint -restore */
	else
	{

			me->id = eventId;
			me->destination = destinationFSM;
			me->eventDestroy_f = (WST_EVT_destroy_f) NULL;
			me->isStatic = WSTFALSE;

	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


/**
* \brief Returns the event ID.
* \param me Pointer to the event
* \return ID of the given event
*/


/**
* \brief Generates an event.
* \param id Identifier of the event
* \param destinationFSM Receiver of the event
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_EVT_gen( void* source, struct WST_FSM_t* destinationFSM, WST_EVT_ID_t id )
{																			
	if (destinationFSM != NULL) {								
		struct WST_EVT_t*  event = WST_MEM_getMemory( sizeof(WST_EVT) );				
		WST_EVT_init( event, id, destinationFSM );							

		(void)  WST_FSM_gen( destinationFSM, event, WSTFALSE );	     		
	}	
	else
	{
		WST_ERR_error( WST_ERR_EVENT_NULL_DEST );
	}																	
}
										 
#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WSTBoolean WST_EVT_toBeCancelled( const WST_EVT* const me , const WST_FSM*  destination, WST_EVT_ID_t id )
{
	WSTBoolean hasToBeCancelled = WSTFALSE;
	
    /* Check if the event has the right destination */
    /* and check if we remove the correct id */
    if ( (me != NULL) &&
				 (me->destination == destination) &&
				 ( (id == 0) || (id == me->id) )
	   )
    {
        hasToBeCancelled = WSTTRUE;
    }
    return hasToBeCancelled;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

										 
