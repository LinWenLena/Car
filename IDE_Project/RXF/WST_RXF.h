#ifdef WST_H

#ifndef WSTINITIALIZATION_H
#define WSTINITIALIZATION_H

/**
* \brief Base class of the RXF, handling initialization, startup and execution via the event based scheduler.
*
* Willert Software Tools - Realtime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_RXF.h 30194 2014-09-30 12:18:33Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_RXF.h $
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



/** \brief Function-like macro to access the main task.
 *  \req{RXF-847} \req{RXF-848}
 *
 *  In the OO-RTX there is just one task and the mainTask is just a dummy for compatibility.
 */
#define WST_RXF_getMainTask()		(NULL)


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/**
 * \brief Initialises framework objects.
 * \req{RXF-850}
 *
 * It calls the init timer routine to set up either a thread (when used with an RTOS)
 * or a periodic interrupt (OO-RTX, timer implementation via WSTTarget) to allow
 * the timers to work. Also calls initializers of the message queue and memory
 * management, optionally also for WSTMonitor.
 */
sint16 WST_RXF_init( void );


/**
 * \brief Empty defition of the function-like macro.
 * \req{RXF-852}
 *
 * The RXF is usually not instanciated and destroyed, but keeps running as long as the system
 * is powered. So cleanup is defined as an empty macro to save resources and allow code generators
 * to expect it to exist for compatibility reasons.
 */
#define WST_RXF_cleanup


/**
 * \brief Start the framework.
 * \req{RXF-851}
 *
 * This function is called in a xxxMain() function generated by in the 
 * main component source, when the user specifies to generate an executable. 
 */
void WST_RXF_start( void );

/**
 * \brief Event based scheduler execution, it never ends.
 * \req{RXF-858}
 *
 * This function checks or waits for messages from WST_MSQ for the task it is running in and
 * �n the OO-RTX also handles elapsed timeouts.
 */
void WST_RXF_execute( void );

/**
 * \brief Alternatively to the execute() method, process scheduled events only once.
 * \req{RXF-859}
 *
 *  This allows running the whole RXF scheduling e.g. as a child scheduler inside of an external
 *  RTOS task.
 */
void WST_RXF_executeOnce( uint8 numberOfEvents );

/**
 * \brief Cancels all events and timeouts for the specified destination.
 * \req{RXF-863}
 *
 *  This is called when an active object is destroyed and events and timeouts destined to it need
 *  to be invalidated.
 */
void WST_RXF_cancelEventsAndTimeouts(const WST_FSM*  destination);

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif /* of WSTINITIALIZATION_H */

#endif /* WST_H */
