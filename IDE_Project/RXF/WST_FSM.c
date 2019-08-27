/**
* \defgroup runtime RunTime Package
*
*/

/**
* \ingroup runtime
* \class WST_FSM
* \brief Class for FSM (finite state machine) Behavior
*
* Aggregated by all classes that use a statechart.
*
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_FSM.c 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_FSM.c $
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


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


static void         consumeGivenEvent           (WST_FSM* const me, WST_EVT *  event);
static WSTBoolean	inNullConfig                (const WST_FSM* const me);
static WSTBoolean   isBehaviorStarted           (const WST_FSM* const me);
static WSTBoolean   isBusy                      (const WST_FSM* const me);
static WSTBoolean	isInCleanup                 (const WST_FSM* const me);
static WSTBoolean   runToCompletion             (WST_FSM* const me);
static void         setBehaviorStarted          (WST_FSM* const me, WSTBoolean  b);
static void         setCompleteStartBehavior    (WST_FSM* const me, WSTBoolean  b);
static void         setShouldTerminate          (WST_FSM* const me, WSTBoolean  b);
static WSTBoolean	shouldCompleteRun           (const WST_FSM* const me);
static WSTBoolean	shouldCompleteStartBehavior (const WST_FSM* const me);
static WSTBoolean   shouldDelete                (const WST_FSM* const me);
static WSTBoolean	shouldTerminate             (const WST_FSM* const me);

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



#ifndef WST_PORTS_DISABLED


#define WST_RXF_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/* Values of IWST_FSM_Vtbl */
static const IRiCReactive_Vtbl IWST_FSM_Vtbl_Values = 
{
	offsetof( WST_FSM, iRiCReactive ),
	WST_FSM_genInternal
};

#define WST_RXF_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#endif /* WST_PORTS_DISABLED */



/***     Methods implementation    ***/

/**
* \brief Initializes the FSM (finite state machine) object.
* \param me Pointer to FSM (finite state machine) object
* \param pOwner Pointer to object that aggregated this class.
* \param vtbl Pointer to the virtual table to allow operation calls on the parent.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#ifdef WST_MODELLING_RPY /* workaround for Rhapsody task parameter and vtable */
void				WST_FSM_init(WST_FSM* const me, void *  owner, const void* task, const WST_FSM_Vtbl *  vtbl)
#else /* of WST_MODELLING_RPY as workaround for Rhapsody task parameter and vtable */
void				WST_FSM_init(WST_FSM* const me, void *  owner)
#endif /* of WST_MODELLING_RPY as workaround for Rhapsody task parameter and vtable */
{
	/* Check the me pointer */
	if ( NULL != me )
	{
		me->owner  = owner;
		
	
#ifdef WST_MODELLING_RPY

		/* The StartBehaviorEvent is required for Rhapsody only */
		(void) WST_EVT_init(&(me->startBehaviorEvent),WSTStartBehavior_id, me);

		/* vtable only used for Rhapsody compatibility */
		me->vtbl            			= vtbl;
#endif /* WST_MODELLING_RPY */

		me->current_event 				= NULL;		
		me->status       				= WST_FSM_statusDefault;
		me->nullTransitionCount			= 0U;
	
#ifndef WST_PORTS_DISABLED


		IRiCReactive_Init( &me->iRiCReactive, &IWST_FSM_Vtbl_Values );


#endif /* WST_PORTS_DISABLED */	

	} /* if NULL != me */
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */






/**
* \brief Cleans up the FSM object.
* \param me Pointer to WST_FSM object
*
* Cancels the events and switches its status to be in cleanup.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_FSM_cleanup(WST_FSM* const me)
{
	
#ifndef WST_NO_CLASS_DESTRUCTION
	
	/* Check the me pointer */

	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		/* Used to be local setInCleanup() function like macro */
		me->status |= WST_FSM_statusInCleanup;

		WST_RXF_cancelEventsAndTimeouts( me );
	}

#endif /* WST_NO_CLASS_DESTRUCTION */
	
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Receives and consumes an event.
* \param me Pointer to WST_FSM object
* \param event Pointer to the event to consume.
* \req{RXF-666}
*
* If in started behavior, consume the event.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static void consumeGivenEvent(WST_FSM* const me, WST_EVT *  event)
{
	WSTDispatchEvent dispatchEvent = NULL;
	WSTBoolean nullStepsInRange = WSTTRUE;

	if ( me == NULL )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else if ( event == NULL )
	{
		WST_ERR_error( WST_ERR_EVENT_NULL );
	}
	else if( isInCleanup(me) == WSTFALSE )
	{
		/* ignore event if startBehavior has not been called */
		if( isBehaviorStarted(me) == WSTTRUE)
		{


#ifdef WST_MODELLING_RPY /* vtable only used for Rhapsody compatibility */
			/* set parameters */
			if ( me->vtbl != NULL )
			{
				dispatchEvent = me->vtbl->dispEventFunc;
			}
#else /* WST_MODELLING_RPY */
			dispatchEvent = me->dispEventFunc;
#endif /* WST_MODELLING_RPY */

			if ( dispatchEvent != NULL )
			{
				me->current_event = event;

				/* For the first received event, we need to perform runToCompletion() */
				/* If in we are in startBehavior(), shouldCompleteStartBehavior()     */
				/* should return WSTTRUE, for any other event, WSTFALSE.                    */
				if ( shouldCompleteStartBehavior(me) == WSTTRUE )
				{
					setCompleteStartBehavior( me, WSTFALSE );
					
					/* Protect from recursive triggered operation calls */
					me->status |= WST_FSM_statusBusy;
					
					nullStepsInRange = runToCompletion(me);
					
					if ( nullStepsInRange == WSTFALSE )
					{
						/* Infinite loop, notify the user and return */
						WST_ERR_error ( WST_ERR_INFINITE_NULL_TRANSITIONS );
					}			
					me->status &= ~WST_FSM_statusBusy;					/* busy flag = false */
				}
				
				if( nullStepsInRange )
				{
					/* Check that this was not the dummy start behavior event */
					if ( event->id != WSTStartBehavior_id )
					{
						if ( isBusy(me) == WSTFALSE )
						{
							/* Protect from recursive triggered operation calls */
							me->status |= WST_FSM_statusBusy;					/* busy flag = true */

							/* handle the event */
							dispatchEvent( me->owner, event->id );

							/* check runToCompletion() */
							if ( shouldCompleteRun(me) == WSTTRUE )
							{
								nullStepsInRange = runToCompletion(me);
								
								if ( nullStepsInRange == WSTFALSE )
								{
									/* Infinite loop, notify the user and return */
									WST_ERR_error ( WST_ERR_INFINITE_NULL_TRANSITIONS );
								}
							}
							me->status &= ~WST_FSM_statusBusy;					/* busy flag = false */
						}
					}
				}
				
				if( nullStepsInRange == WSTTRUE )
				{
					/* clean up current_event */
					me->current_event = NULL;
				}
			}
		}  
	}
	else
	{
		/* Already in cleanup, nothing to be done. else statement for MISRA */
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



#ifndef WST_PORTS_DISABLED


/**
* \brief Generate an event.
* \param me Pointer to FSM (finite state machine) object
* \param event Pointer to event.
* \param fromIsr WSTBoolean. If set, the event is generated from within an ISR
* \return WSTTRUE if successfull, WSTFALSE otherwise
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WSTBoolean WST_FSM_genInternal( void* const me, WST_EVT *event, WSTBoolean fromISR )
{
	return WST_FSM_gen( (WST_FSM *) me, event, fromISR );
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#endif /* WST_PORTS_DISABLED */

/**
* \brief Generates an event.
* \param me Pointer to WST_FSM object
* \param event Pointer to the event that should be generated.
* \param fromISR WSTTRUE is the event is sent from within an ISR
* \return WSTTRUE if successfull, WSTFALSE otherwise.
*
* Sets the events destination and inserts it into the event queue. The fromISR parameter is
* for being compatible with the RXF framework based on an RTOS
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WSTBoolean WST_FSM_gen(WST_FSM* const me, WST_EVT *  event, WSTBoolean fromISR)
{
/*lint -save -e613 -e831  Possible use of null pointer, Reference cited in prior message */

	WSTBoolean ret;

	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
		ret = WSTFALSE;
	}
/*lint restore */
	else if ( NULL == event )
	{
		ret = WSTFALSE;
	}	
	else
	{
		/* If object is in cleanup, no new events must be accepted. */
		if ( isInCleanup(me) == WSTTRUE )
		{
			ret = WSTFALSE;
		}
		else
		{
			/* Set the destination for the event */
			event->destination = me;
			
			/* put it in the queue */
			WST_MSQ_put( event );

			ret = WSTTRUE;
		}
	}
	return ret;
	
}
/*lint -restore */

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/**
* \brief Returns the underlying WST_EVT for the given base event.
* \param base: Pointer to any application event with an underlying WST_EVT as the first element in its structure
* \return Pointer to the given event's underlying WST_EVT
*
* Return the underlying WST_EVT for the given base event.  The
* base event can be pointing to any application event structure that
* contains an WST_EVT as its first data item.
*/

#ifndef WST_PORTS_DISABLED

	
#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_EVT *WST_FSM_getEvent(WST_BaseEvent *base)
{
	WST_EVT *result = NULL;

	if( base != NULL )
	{
		result = &(base->WST_event);
	}

	return result;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#endif /* WST_PORTS_DISABLED */


/**
* \brief Returns the null transition counter of the object.
* \param me Pointer to WST_FSM object
* \return the null transition counter of the object.
* \req{RXF-667}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static WSTBoolean inNullConfig(const WST_FSM* const me)
{
	/* No me != NULL pointer check needed, because it is static and just called from static function
	 * runToCompletion(), which is just called after me pointer check.
	 */
	WSTBoolean isInNullConfig = WSTFALSE;
	
	if (me->nullTransitionCount > 0U )
	{
		isInNullConfig = WSTTRUE;
	}
	return isInNullConfig;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Returns, if the object is in started status.
* \param me Pointer to WST_FSM object
* \return WSTTRUE if the object is in started status, WSTFALSE otherwise.
* \req{RXF-668}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static WSTBoolean isBehaviorStarted(const WST_FSM* const me)
{
	/* No me != NULL pointer check needed, because it is static and just called after me pointer check.
	 */
	WSTBoolean ret;
	
	if ( (me->status & WST_FSM_statusStarted) != WST_FSM_statusFALSE )
	{
		ret = WSTTRUE;
	}
	else
	{
		ret = WSTFALSE;
	}
	return ret;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Returns, if the object is in busy status.
* \param me Pointer to WST_FSM object
* \return WSTTRUE if the object is in busy status, WSTFALSE otherwise.
* \req{RXF-669}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static WSTBoolean isBusy(const WST_FSM* const me)
{
	/* No me != NULL pointer check needed, because it is static and just called after me pointer check.
	 */
	WSTBoolean ret;
	
	if ( (me->status & WST_FSM_statusBusy ) != WST_FSM_statusFALSE )
	{
		ret = WSTTRUE;
	}
	else
	{
		ret = WSTFALSE;
	}
	return ret;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Returns, if the object is in cleanup status.
* \param me Pointer to WST_FSM object
* \return WSTTRUE if the object is in cleanup status, WSTFALSE otherwise.
* \req{RXF-670}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static WSTBoolean isInCleanup(const WST_FSM* const me)
{
	WSTBoolean ret;
	if ( (me->status & WST_FSM_statusInCleanup) != WST_FSM_statusFALSE )
	{
		ret = WSTTRUE;
	}
	else
	{
		ret = WSTFALSE;
	}
	return ret;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Decrements the null transition counter.
* \param me Pointer to WST_FSM object
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_FSM_popNullConfig(WST_FSM* const me)
{
	/* Check the me pointer */

	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		if ( me->nullTransitionCount > 0U )
		{
			me->nullTransitionCount--;
		}
		else
		{
			WST_ERR_error( WST_ERR_TOO_FEW_NULL_CONFIGS );
		}
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Increments the null transition counter.
* \param me Pointer to WST_FSM object
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_FSM_pushNullConfig(WST_FSM* const me)
{
	/* Check the me pointer */
	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		me->nullTransitionCount++;
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Handles run-to-completion behavior by calling dispatchEvent() for null transitions.
* \param me Pointer to WST_FSM object
* \return WSTTRUE if successfull, WSTFALSE if infinite loop is detected that has to be solved another way.
* \req{RXF-671}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static WSTBoolean runToCompletion(WST_FSM* const me)
{
	/* No me != NULL pointer check needed, because it is static and just called after me pointer check.
	 */
	WSTBoolean			 		nullStepsInRange = WSTTRUE;
	sint16				 		nullStepCount = 0;
	WST_EVT_handleEventStatus	status;
	void                	   *localOwner;
	WSTDispatchEvent     		dispatchEvent = NULL;
	WSTBoolean			 		stopNullSteps = WSTFALSE;

	/* If untriggered transitions are "hot" take them */
	while ( inNullConfig(me) == WSTTRUE )
	{
		localOwner = me->owner;

#ifdef WST_MODELLING_RPY /* vtable only used for Rhapsody compatibility */
		if (me->vtbl != NULL)
		{
			dispatchEvent = me->vtbl->dispEventFunc;
		}
#else /* WST_MODELLING_RPY */
		dispatchEvent = me->dispEventFunc;
#endif /* WST_MODELLING_RPY */

		nullStepCount++;
		if ( nullStepCount > WST_DEFAULT_MAX_NULL_STEPS )
		{
			/* Found infinite loop */
			nullStepsInRange = WSTFALSE;
			stopNullSteps = WSTTRUE;
			
			WST_ERR_error ( WST_ERR_INFINITE_NULL_TRANSITIONS );

			/* reset the null config count */
			me->nullTransitionCount = 0U;
		}
		else if (dispatchEvent == NULL)
		{
			/* No more null transitions to take */
			stopNullSteps = WSTTRUE;
		}
		/* Abort when in Cleanup */
		else if ( (isInCleanup(me) == WSTTRUE) )
		{
			stopNullSteps = WSTTRUE;
		}
		else
		{
			status = dispatchEvent( localOwner, WST_EVT_Null_id );

			/* Perform the null transition */
			if ( ( status == WST_EVT_handleEventNotConsumed ) ||
				 ( status == WST_EVT_handleEventError ) )
			{
				stopNullSteps = WSTTRUE;
			}
		}
		if( stopNullSteps == WSTTRUE )
		{
			break;
		}
	}

	return nullStepsInRange;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Sets if the object is in started status.
* \param me Pointer to WST_FSM object
* \param b  WSTTRUE to set the object is in started status.
* \req{RXF-672}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static void setBehaviorStarted(WST_FSM* const me, WSTBoolean  b)
{
	/* No me != NULL pointer check needed, because it is static and just called after me pointer check.
	 */
	if ( b == WSTTRUE )
	{
		me->status |= WST_FSM_statusStarted;
	}
	else
	{
		me->status = me->status & (uint8)(~WST_FSM_statusStarted);
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Sets if the object is in completed start status.
* \param me Pointer to WST_FSM object
* \param b WSTTRUE to set the object is in completed start status.
* \req{RXF-673}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static void setCompleteStartBehavior(WST_FSM* const me, WSTBoolean  b)
{
	/* No me != NULL pointer check needed, because it is static and just called after me pointer check.
	 */
	if ( b == WSTTRUE )
	{
		me->status |= WST_FSM_statusShouldCompleteStartBehavior;
	}
	else
	{
		me->status = me->status & (uint8)(~WST_FSM_statusShouldCompleteStartBehavior);
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Sets if the object is in should delete status.
* \param me Pointer to WST_FSM object
* \param b WSTTRUE to set the object is in should delete status.
* \req{RXF-677}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_FSM_setShouldDelete(WST_FSM* const me, WSTBoolean  b)
{
	/* Check the me pointer */
	if ( NULL != me )
	{
		if ( b == WSTTRUE )
		{
			me->status |= WST_FSM_statusShouldDelete;
		}
		else
		{
			me->status = me->status & (uint8)(~WST_FSM_statusShouldDelete);
		}
	} /* if NULL != me */
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Sets if the object is in should terminate status.
* \param me Pointer to WST_FSM object
* \param b WSTTRUE to set the object is in should terminate status.
* \req{RXF-674}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static void setShouldTerminate(WST_FSM* const me, WSTBoolean  b)
{
	/* Check the me pointer */
	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else if ( b == WSTTRUE )
	{
		me->status |= WST_FSM_statusTerminating;
	}
	else
	{
		me->status = me->status & (uint8)(~WST_FSM_statusTerminating);
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Returns if the FMS should complete execution.
* \param me Pointer to WST_FSM object
* \req{RXF-675}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static WSTBoolean shouldCompleteRun(const WST_FSM* const me)
{
	/* No me != NULL pointer check needed, because it is static and just called after me pointer check. */
	WSTBoolean ret;

	if (me->nullTransitionCount > 0U)
	{
		ret =  WSTTRUE;
	}
	else if ( (me->status & ((uint8) ~WST_FSM_statusShouldDelete) & ((uint8) ~WST_FSM_statusStarted)) != WST_FSM_statusFALSE )
	{
		ret =  WSTTRUE;
	}
	else
	{
		ret = WSTFALSE;
	}
	return ret;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Returns the objects complete start behavior status.
* \param me Pointer to WST_FSM object
* \return The objects complete start behavior status.
* \req{RXF-676}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static WSTBoolean shouldCompleteStartBehavior(const WST_FSM* const me)
{
	/*  No me != NULL pointer check needed, because it is static and just called after me pointer check. */
	WSTBoolean returnValue;
		
	if ( (me->status & WST_FSM_statusShouldCompleteStartBehavior) != WST_FSM_statusFALSE )
	{
		returnValue = WSTTRUE;
	}
	else
	{
		returnValue = WSTFALSE;
	}

	return returnValue;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Returns if the object is in should delete status.
* \param me Pointer to WST_FSM object
* \return WSTTRUE if the object is in should delete status, WSTFALSE otherwise.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static WSTBoolean shouldDelete(const WST_FSM* const me)
{
	WSTBoolean ret;
	if ( (me->status & WST_FSM_statusShouldDelete ) != WST_FSM_statusFALSE )
	{
		ret = WSTTRUE;
	}
	else
	{
		ret = WSTFALSE;
	}
	return ret;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Returns the objects should terminate status.
* \param me Pointer to WST_FSM object
* \return The objects should terminate status.
* \req{RXF-678}
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

static WSTBoolean shouldTerminate(const WST_FSM* const me)
{
	WSTBoolean ret;
	if ( (me->status & WST_FSM_statusTerminating) != WST_FSM_statusFALSE )
	{
		ret = WSTTRUE;
	}
	else
	{
		ret = WSTFALSE;
	}
	return ret;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Starts the behavior of the FSM (finite state machine) object.
* \param me Pointer to WST_FSM object
* \return WSTTRUE if successfull, WSTFALSE otherwise.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WSTBoolean WST_FSM_start(WST_FSM* const me)
{
	WSTBoolean returnValue = WSTFALSE;
	
	/* Check the me pointer */
	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
#ifdef WST_MODELLING_RPY /* vtable only used for Rhapsody compatibility */
	/* Check the vtbl pointer */
	else if ( NULL == me->vtbl )
	{
		WST_ERR_error( WST_ERR_EMPTY_VTBL_PTR );
	}
#endif /* WST_MODELLING_RPY */
	else
	{	
		/* start behavior only once */
		if ( isBehaviorStarted(me) == WSTFALSE )
		{
			/* mark that startBehavior was called */
			setBehaviorStarted( me, WSTTRUE );
	
/* only Rhapsody code needs the call of entDef via vtable, other modelling tools
 * generate code for inisialization themselves.
 */
#ifdef WST_MODELLING_RPY /* vtable only used for Rhapsody compatibility */
			if ( me->vtbl->rootState_entDefFunc != NULL )
			{
				(*me->vtbl->rootState_entDefFunc)(me->owner);
			}
#endif /* WST_MODELLING_RPY */
	
			/* Generate a dummy event in case the instance doesn't receive */
			/* any external events. This causes the runToCompletion()      */
			/* operation to be taken after the default transition.         */
			if ( shouldCompleteRun(me) == WSTTRUE )
			{
				setCompleteStartBehavior( me, WSTTRUE );
	
/* The StartBehaviorEvent is required for Rhapsody only */
#ifdef WST_MODELLING_RPY
/*lint -save -e740 Unusual pointer cast (incompatible indirect types) */
/* @MISRA_11.4=OFF ID-0003: Rhapsody uses different types of event structures that need to be casted to each other, e.g. a timer event has to be casted to a normal event before it is consumed. */
				(void) WST_FSM_gen(me, (WST_EVT*) &(me->startBehaviorEvent), WSTFALSE);
/* @MISRA_11.4=ON */
/*lint -restore */
#endif /* of WST_MODELLING_RPY */
	
			}
		}
	
		/* Delete the object if it reached a terminate connector */
		if ( shouldTerminate(me) != WSTFALSE )
		{
			if ( shouldDelete(me) == WSTTRUE )
			{
#ifdef WST_MODELLING_RPY /* vtable only used for Rhapsody compatibility, no user code destroy method for other tools supported */
				if (me->vtbl->destroyMethod != NULL)
				{
					me->vtbl->destroyMethod(me->owner);
				}
#endif /* WST_MODELLING_RPY */
			}
		}
		else
		{
			returnValue = WSTTRUE;
		}
	} /* me pointer check */
	
	return returnValue;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Receives an event and handles it.
* \param me Pointer to WST_FSM object
* \param event Pointer to event to handle
* \return The take event status. It can be one of those:
*   - WST_EVT_handleEventError
*   - WST_EVT_handleEventInCleanup
*   - WST_EVT_handleEventCompleted
*   - WST_EVT_handleEventReachTerminate
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_EVT_handleEventStatus WST_FSM_takeEvent(WST_FSM* const me, WST_EVT*  event)
{
	WST_EVT_handleEventStatus returnValue = WST_EVT_handleEventError;

	/* Check the me pointer */
	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else if ( isInCleanup(me) == WSTTRUE )
	{
		returnValue = WST_EVT_handleEventInCleanup;
	}
	/* Function shouldDelete has no side effects and only returns a boolean based on a flag, but PC-lint shows MISRA violation 12.4 */
	else if ( (shouldTerminate(me) == WSTTRUE) && (shouldDelete(me) == WSTFALSE) )
	{
		returnValue = WST_EVT_handleEventCompleted;
	}

#ifdef WST_MODELLING_RPY /* vtable only used for Rhapsody compatibility */
	/* set parameters */
	else if ( NULL == me->vtbl )
	{
		WST_ERR_error( WST_ERR_EMPTY_VTBL_PTR );
	}
	else if ( me->vtbl->consumeEvent == NULL )
	{
		consumeGivenEvent( me, event );

		if ( shouldTerminate(me) == WSTTRUE )
		{
			returnValue = WST_EVT_handleEventReachTerminate;
		}
		else
		{
			returnValue = WST_EVT_handleEventCompleted;
		}
	}
#endif /* WST_MODELLING_RPY */

	else
	{

#ifdef WST_MODELLING_RPY /* vtable only used for Rhapsody compatibility */

		me->vtbl->consumeEvent( me, event );

#else /* WST_MODELLING_RPY */

		consumeGivenEvent( me, event );

#endif /* WST_MODELLING_RPY */

		if ( shouldTerminate(me) == WSTTRUE )
		{
			returnValue = WST_EVT_handleEventReachTerminate;
		}
		else
		{
			returnValue = WST_EVT_handleEventCompleted;
		}
	}

	return returnValue;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Receives an event and handles it.
* \param me Pointer to WST_FSM object
* \param event Pointer to event to handle
* \return The take event status. It can be one of those:
*   - WST_EVT_handleEventError
*   - WST_EVT_handleEventInCleanup
*   - WST_EVT_handleEventCompleted
*   - WST_EVT_handleEventReachTerminate
*
* Just like WST_FSM_takeEvent(), internally calls that operation.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_EVT_handleEventStatus WST_FSM_handleSyncEvent(WST_FSM* const me, WST_EVT* event)
{
	WST_EVT_handleEventStatus returnValue = WST_EVT_handleEventError; 
	/* Check the me pointer */
	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
		
	}
	else
	{
		returnValue = WST_FSM_takeEvent( me, event );
	}
	return returnValue;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Terminate the instance
* \param me Pointer to WST_FSM object
*
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_FSM_terminate(WST_FSM* const me)
{
	/* Check the me pointer */
	if ( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		setShouldTerminate( me, WSTTRUE );
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */
