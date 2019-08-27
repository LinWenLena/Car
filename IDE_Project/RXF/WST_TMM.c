/**
* \ingroup runtime
* \class WST_TMM
* \brief Timer Manager Class
*
* This class keeps track of the lists of free und used timeouts.
*
* This is a Singleton class.
*
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_TMM.c 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/RXF/OORTX/Source/C/WST_TMM.c $
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


#define WST_RXF_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_TMM	mainTMM;


#define WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#if 	WST_TIMEUNIT_ADDRESS_SIZE == 16
#define WST_RXF_RUNNING_START_SEC_DATA_INIT_16_FAST
#elif 	WST_TIMEUNIT_ADDRESS_SIZE == 24
#define WST_RXF_RUNNING_START_SEC_DATA_INIT_24_FAST
#elif 	WST_TIMEUNIT_ADDRESS_SIZE == 32
#define WST_RXF_RUNNING_START_SEC_DATA_INIT_32_FAST
#else
#define WST_RXF_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#endif
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_TimeUnit_t  		WST_TMM_processedTicks = (WST_TimeUnit_t) 0;

#if 	WST_TIMEUNIT_ADDRESS_SIZE == 16
#define WST_RXF_RUNNING_STOP_SEC_DATA_INIT_16_FAST
#elif 	WST_TIMEUNIT_ADDRESS_SIZE == 24
#define WST_RXF_RUNNING_STOP_SEC_DATA_INIT_24_FAST
#elif 	WST_TIMEUNIT_ADDRESS_SIZE == 32
#define WST_RXF_RUNNING_STOP_SEC_DATA_INIT_32_FAST
#else
#define WST_RXF_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#endif
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


/***     Methods implementation    ***/





/**
* \brief Adds a timeout event to a temporary list of busy timeouts. This timout will be added later to the RXF queue.
* \param delayTime Time to set for the timeout.
* \param id ID to set for the timeout.
* \param destination Destination to set for the timeout.
*
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#if WST_TMM_MAX_IRQ_TIMEOUTS > 0

void WST_TMM_addIRQTimer( WST_TimeUnit_t delayTime, WST_TMR_ID_t id, WST_FSM* destination )
{
	/* Add new timer to tmporary list */
	mainTMM.irqTimeouts[ mainTMM.writePtr ].destination = destination;
	mainTMM.irqTimeouts[ mainTMM.writePtr ].id = id;
	mainTMM.irqTimeouts[ mainTMM.writePtr ].time = delayTime;
	
	/* increment write pointer to indicate the execute function that a new timout is available initiated from a interrupt routine. */
	mainTMM.writePtr = ( mainTMM.writePtr + 1 ) % WST_TMM_MAX_IRQ_TIMEOUTS;
	
	mainTMM.irqTimeoutCount++;
	if(mainTMM.irqTimeoutCount > mainTMM.irqTimeoutHighwater) mainTMM.irqTimeoutHighwater = mainTMM.irqTimeoutCount;
	
	if ( mainTMM.writePtr == mainTMM.readPtr )
	{
		WST_ERR_error ( WST_ERR_TIMEOUT_TMPBUFFER_FULL );
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Checks if an temporary timeout, created by an IRS must be handled.
*
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_TMM_handleIRQTimeouts()
{

	/* check if an timout which needs to be removed from the busy list by an IRQ needs is availabel in the temporary timer list */
	while( mainTMM.writePtr != mainTMM.readPtr )
	{
		if( mainTMM.irqTimeouts[ mainTMM.readPtr ].time == 0 )
		{
			/* temporary timeout available so start it */
			WST_TMM_stop( mainTMM.irqTimeouts[ mainTMM.readPtr ].id, mainTMM.irqTimeouts[ mainTMM.readPtr ].destination );
		}
		else
		{
			/* temporary timeout available so start it */
			WST_TMM_start( mainTMM.irqTimeouts[ mainTMM.readPtr ].time, mainTMM.irqTimeouts[ mainTMM.readPtr ].id, mainTMM.irqTimeouts[ mainTMM.readPtr ].destination );
		}
		
		/* increment read pointer */
		mainTMM.readPtr = ( mainTMM.readPtr + 1 ) % WST_TMM_MAX_IRQ_TIMEOUTS;
		
		if(mainTMM.irqTimeoutCount > 0) mainTMM.irqTimeoutCount--;
	}

}
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


/**
* \brief Adds a timeout event to the list of busy timeouts.
* \param delayTime Time to set for the timeout.
* \param id ID to set for the timeout.
* \param destination Destination to set for the timeout.
*
* Adds a timeout to the list. When in a statechart tm(xxx) is used the result will be an entry in this list.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_TMM_start( WST_TimeUnit_t delayTime, WST_TMR_ID_t id, WST_FSM* destination )
{
	WST_TMR		 *  timeout,
					 *  p;
	WST_TimeUnit_t            ticks;
	
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	if( mainTMM.mutex > 0 ){
		WST_TMM_addIRQTimer( delayTime, id, destination );
	}
	else
	{
		TMM_MUTEX_INCREMENT;
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */
		
		/* Do we have a timeout available? */
		if ( mainTMM.itsFreeList == NULL )
		{
			WST_ERR_error ( WST_ERR_TIMEOUT_HEAP_FULL );
		}
		else
		{

			/* Get a timeout from the free list */
			timeout = mainTMM.itsFreeList;
			mainTMM.itsFreeList = timeout->nextTm;

			/* Initialise with the appropriate info */
			ticks = WST_TMM_WSTTimeToTicks( delayTime );
			timeout->id = WST_TMR_id;
			timeout->timer_id = id;
			timeout->destination = destination;
			timeout->remainingTicks = ticks;

			/* And insert timeout into the busy list */
			/* List empty First element */

			if ( mainTMM.itsBusyList == NULL )
			{
				/* The list was empty so we place it in the list.

				   Before: ->NULL

				   New:    [150]

				   After:  [150]->NULL

				 */
				 
				mainTMM.itsBusyList = timeout;
				timeout->nextTm = NULL;
			}
			else
			{
				/* Check if the new element must be placed _before_ the first in the busy list */
				if ( mainTMM.itsBusyList->remainingTicks >= timeout->remainingTicks )
				{
					/* Yes must be before. Do it now. */
					timeout->nextTm = mainTMM.itsBusyList;
					mainTMM.itsBusyList = timeout;

					/* The next elements time must be decreased with the new elements
					   time. In that way we store the time relative.

					   Before: [100]->[100]->[25]->NULL

					   New:    [50]

					   After:  [50]->[50]->[100]->[25]->NULL

					 */
				}
				else
				{
					/* No it must be after the first element. Good, now we only have to
					   walk acros the list. Now let p point to the first element
					 */
					p = mainTMM.itsBusyList;

					/* Since we store the time relative we must subtract the first element's
					   time from the new elements time.
					 */

					if ( timeout->remainingTicks >= p->remainingTicks )
					{
						timeout->remainingTicks -= p->remainingTicks;
					}
					else
					{
						timeout->remainingTicks = (WST_TimeUnit_t) 0;
					}

					while ((p->nextTm != NULL) && (timeout->remainingTicks > p->nextTm->remainingTicks))
					{
						timeout->remainingTicks -= p->nextTm->remainingTicks;
						p = p->nextTm;
					}

					/* OK, we found the element where we place the new one after
					   This can be the last, the last element's next pointer is NULL
					   but we can handle that.
					 */
					timeout->nextTm = p->nextTm;
					p->nextTm = timeout;
					/* The next elements time must be decreased with the new elements
					   time. In that way we store the time relative.

					   Before: [100]->[100]->[25]->NULL

					   New:    [150]

					   After:  [100]->[50]->[50]->[25]->NULL

					 */
				}
				if (timeout->nextTm != NULL)
				{
					/*	Only adjust next timer when there is a next timer.....
					 */

					if ( timeout->nextTm->remainingTicks >= timeout->remainingTicks )
					{
						timeout->nextTm->remainingTicks -= timeout->remainingTicks;
					}
					else
					{
						timeout->nextTm->remainingTicks = (WST_TimeUnit_t) 0;
					}
				}
			}

#ifdef WST_CFG_HIGHWATERMARKS
			mainTMM.count++;

			if ( mainTMM.count > highwater.timeoutsMax )
			{
				highwater.timeoutsMax = mainTMM.count;
			}
#endif /* WST_CFG_HIGHWATERMARKS */

		}
		
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	mainTMM.mutex--;
	}
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Cancels all timeout events in the list of timeouts for the specified destination.
* \param destination Destination that defines, which timeout events will be canceled.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_TMM_cancelEvents(const WST_FSM*  destination)
{
	WST_TMR* 	timeout;
	WST_TMR*		parent       = NULL;
	WST_TimeUnit_t  	    delayTime        = (WST_TimeUnit_t) 0;
	WSTBoolean	    TimeoutFound = WSTFALSE;
	
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	TMM_MUTEX_INCREMENT;	
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */

	/* Iterate down the busy list looking for any timeouts with this destination */
	timeout = mainTMM.itsBusyList;

	while ( timeout != NULL )
	{
		/* keep track of next timer for list traversal */
		WST_TMR* pSuccessor = timeout->nextTm;

		if ( timeout->destination == destination )
		{
			/* Found one so remove it */
			TimeoutFound = WSTTRUE;
#ifdef WST_CFG_HIGHWATERMARKS
			mainTMM.count--;
#endif /* WST_CFG_HIGHWATERMARKS */
				delayTime = timeout->remainingTicks;

			if ( parent == NULL )
			{
				mainTMM.itsBusyList = timeout->nextTm;
			}
			else
			{
				parent->nextTm = timeout->nextTm;
			}

			/*
			  Before: [100]->[75]->[50]->[25]->NULL
	
			  Remove:    [150]
	
			  After:  [100]->[125]->[25]->NULL
	
			  * Now adjust the relative ticktime for the next element
			  * otherwise the total time for all next events would be
			  * shortened, and we don't want that, don't we???
			  */
	
			if ( timeout->nextTm != NULL )
			{
				/*
				 * This is not neccesary for the last item of course.
				 */
				 timeout->nextTm->remainingTicks += delayTime;
			}
	
			/* And add it to the free list */
			timeout->nextTm = mainTMM.itsFreeList;
			mainTMM.itsFreeList = timeout;
		}
		else
		{
			/* traverse to next element without change, i.e. parent must also advance to next parent */
			parent   = timeout;
		}

		/* iterate to next element */
		timeout = pSuccessor;
	}

	if (!TimeoutFound)
	{
		/* No timeout found in the busy list. It could have been added to the event queue 
	 * when another event already existed.
	 */
		WST_MSQ_cancelEvents( destination, WST_TMR_id );
	}
	
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	mainTMM.mutex--;	
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Returns an expired timeout event, if there is one in the list of busy timeouts.
* \return Pointer to the timeout.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_TMR* WST_TMM_getExpiredTimeout(void)
{
	WST_TMR* timeout = NULL;
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	TMM_MUTEX_INCREMENT;	
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */

	if ( mainTMM.itsBusyList != NULL )
	{
		if ( mainTMM.itsBusyList->remainingTicks == (WST_TimeUnit_t) 0)
		{
			timeout = mainTMM.itsBusyList;
			
			mainTMM.itsBusyList = mainTMM.itsBusyList->nextTm;
		}
	} /* mainTMM.itsBusyList != NULL */

#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	mainTMM.mutex--;	
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */
	return timeout;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Puts the given timeout item back to the free list.
* \param timeout Timeout item to put back to the free list.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_TMM_putBack(WST_TMR*  timeout)
{
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
		TMM_MUTEX_INCREMENT;
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */
	timeout->nextTm = mainTMM.itsFreeList;
	mainTMM.itsFreeList = timeout;
	
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
		mainTMM.mutex--;
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */

#ifdef WST_CFG_HIGHWATERMARKS
	mainTMM.count--;
#endif /* WST_CFG_HIGHWATERMARKS */
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Removes the timeout item fitting to the given destination and ID back to the free list.
* \param id ID to identify the timeout item.
* \param destination Destination of the timeout item to remove.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_TMM_stop( WST_TMR_ID_t id, const WST_FSM* destination )
{
	WST_TMR*			timeout;
	WST_TMR*			parent 		= NULL;
	WST_TimeUnit_t  	delayTime		= (WST_TimeUnit_t) 0;
	
	
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	if( mainTMM.mutex > 0 ){
		WST_TMM_addIRQTimer( 0u, id, (WST_FSM*)destination );
	}
	else
	{
		TMM_MUTEX_INCREMENT;
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */

		timeout = mainTMM.itsBusyList;

		/* Iterate down the busy list looking for the requested timeout */
		while ( timeout != NULL )
		{
			if ( ( timeout->destination == destination ) &&
				 ( timeout->timer_id == id ) )
			{
				/* Found it so remove it */
#ifdef WST_CFG_HIGHWATERMARKS
				mainTMM.count--;
#endif /* WST_CFG_HIGHWATERMARKS */

				/* Store the relative ticks to adjust the
				 * next timer elements
				 */
				delayTime = timeout->remainingTicks;

				if ( parent == NULL )
				{
					mainTMM.itsBusyList = timeout->nextTm;
				}
				else
				{
					parent->nextTm = timeout->nextTm;
				}

				/*
				   Before: [100]->[75]->[50]->[25]->NULL

				   Remove:    [150]

				   After:  [100]->[125]->[25]->NULL

				 * Now adjust the relative ticktime for the next element
				 * otherwise the total time for all next events would be
				 * shortened, and we don't want that, don't we???
				 */

				if (timeout->nextTm != NULL)
				{
					/*
					 * This is not neccesary for the last item of course.
					 * 
					 */                  
					 /* PC-Lint complains about a Prohibited Implicit Conversion: Signed versus Unsigned, but all types are actually TimeUnit. The underlying type will be preserved. */
					 timeout->nextTm->remainingTicks += delayTime;
				}

				/* And add it to the free list */
				
				timeout->nextTm = mainTMM.itsFreeList;
				mainTMM.itsFreeList = timeout;

				break;
			}

			parent   = timeout;
			timeout = timeout->nextTm;
		}
		
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	mainTMM.mutex--;	
	}
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */

}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Counts down the tick time to wait of all busy timeout events in the queue.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_TMM_tick( sint16 elapsedTime )
{
	if ( mainTMM.itsBusyList != NULL )
	{

/*lint -save -e571	Suspicious cast */
		/* PC-Lint complains about a Prohibited Implicit Conversion: Signed versus Unsigned, but all types are actually TimeUnit. The underlying type will be preserved. */
		if ( mainTMM.itsBusyList->remainingTicks > ( (WST_TimeUnit_t) elapsedTime) )
		{
			mainTMM.itsBusyList->remainingTicks -= ( (WST_TimeUnit_t) elapsedTime);
		}
		else
		{
			mainTMM.itsBusyList->remainingTicks = (WST_TimeUnit_t) 0;
		}
/*lint restore */
	}

	return;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief The systems WST_TMM_processTimeouts() operation.
*
* A system tick has elapsed. For every timeout, decrement the
* remaining tick time and if any have expired then remove
* them and put them on the event queue.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_TMM_processTimeouts(void)
{
	WST_TMR* timeout;

	WST_TimeUnit_t currentTickCount = WSTRTOS_getRxfTicks();
	sint16 tickCount  = ((sint16) currentTickCount) - ((sint16) WST_TMM_processedTicks);
	WST_TMM_processedTicks = currentTickCount;

	WST_TMM_tick(tickCount);

	timeout = WST_TMM_getExpiredTimeout();

	while ( timeout != NULL )
	{
/*lint -save -e740 Unusual pointer cast (incompatible indirect types) */
/* @MISRA_11.4=OFF ID-0004: Rhapsody uses different types of event structures that need to be casted to each other, e.g. a timer event has to be casted to a normal event before it is consumed. */

		/* Add expired timeout to the event queue */
		WST_MSQ_put( (WST_EVT*) timeout );

/* @MISRA_11.4=ON */
/*lint -restore */

		timeout = WST_TMM_getExpiredTimeout();
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \relates WST_TMM
* \brief Convert a delay (WST_TimeUnit_t) into a number of ticks, using MSPerTick
* \param delayTime (type WST_TimeUnit_t).
* \return number of ticks (WST_TimeUnit_t) with a minimum of 1.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/* declared in WST_TMM.h */
WST_TimeUnit_t WST_TMM_WSTTimeToTicks( WST_TimeUnit_t delayTime )
{
    WST_TimeUnit_t ticks;


    ticks = (WST_TimeUnit_t) (delayTime / (uint16) WST_MS_PER_TICK );
    if ( ticks == (WST_TimeUnit_t) 0 )
    {
        ticks = (WST_TimeUnit_t) 1;
    }
    return ticks;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \relates WST_TMM
* \brief Initializes the timer manager object.
*
* All possible timeout items are put into the the list of free timeouts.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/* declared in WST_TMM.h */
void WST_TMM_init( void )
{
    uint16 i;

#ifdef WST_CFG_HIGHWATERMARKS
    mainTMM.count          =  (uint16) 0;
#endif /* WST_CFG_HIGHWATERMARKS */
	
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	mainTMM.mutex = 0;
	mainTMM.irqTimeoutHighwater = 0;
	mainTMM.irqTimeoutCount = 0;
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */

    mainTMM.itsBusyList    =  NULL;
    mainTMM.itsFreeList    =  NULL;

    /* 1st to n-1 element */
    for ( i=0; i < ( WST_CFG_getMaxTimeouts() - 1 ); i++ )
    {
      (&WST_TMM_itsTimeout[i])->nextTm = &WST_TMM_itsTimeout[i+1];
    }

    /* last element */
    (&WST_TMM_itsTimeout[ WST_CFG_getMaxTimeouts() - 1 ])->nextTm =  NULL;
    mainTMM.itsFreeList = &WST_TMM_itsTimeout[0];
    mainTMM.itsBusyList = NULL;

    WST_TMM_processedTicks = WSTRTOS_getRxfTicks();	/* set to number of ticks at framework initialization */
    
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */
