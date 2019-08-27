#ifdef WST_H

#ifndef WST_FSM_H
#define WST_FSM_H

/**
* $Id: WST_FSM.h 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_FSM.h $
*
* Willert Software Tools - Realtime eXecution Framework
*
* Email: support@willert.de
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


/** \brief Maximum NULL transitions in a row. Used to detect infinety loops in Statecharts.
  * \req{RXF-1174}
  */
#define WST_DEFAULT_MAX_NULL_STEPS	(7)


/* Callback function */
/** \brief Typedef for the pointer to the event handling operation, usually an operation in a class that has a statechart. 
  * \req{RXF-545}
  */
typedef WST_EVT_handleEventStatus	(*WSTDispatchEvent)(void * const void_me, WST_EVT_ID_t id);

/** \brief Function pointer type definition which is used by virtual function tables of the generated sources.
  * \req{RXF-1246}
  */
typedef void						(*WST_rootState_entDef)(void * const arg);

/** \brief Function pointer type definition which is used by virtual function tables of the generated sources.
  * \req{RXF-1247}
  */
typedef void						(*WSTObjectDestroyMethod)(void * arg);

/** \brief  Function pointer definition which is used for operation pointers which are never called but still needed in the virtual table of FSM.
  * \req{RXF-1249}
  */
typedef void						(*WST_NotUsed)(void* const arg);


/**
 * \brief Finite State Machine structure handling execution of state based bahavior.
 *
 * Every class that has a statechart or which is a composite will aggregate one of
 * these classes. In case of Rhapsody as modeling tool, it will use a virtual
 * table to allow this class to call operations on its parent.
 */
struct WST_FSM_t
{

#ifdef WST_MODELLING_RPY

	/** \brief The StartBehaviorEvent is required for Rhapsody only to initially wake up state machines 
	  * \req{RXF-569}
	  */
		WST_EVT   startBehaviorEvent;	/* static */

#endif /* of WST_MODELLING_RPY */


  /** \brief The actual object that owns the FSM object. 
    *   \req{RXF-570}
	  */
	  void * owner;


#ifdef WST_MODELLING_RPY

    /** \brief Dummy task, only needed for Rhapsody compatibility.
	  * \req{RXF-571} \req{RXF-662} \req{RXF-663}
	  */
    void* myTask;

#endif /* WST_MODELLING_RPY */


	/** \brief The event which is currently handled by the FSM. 
    * \req{RXF-572}
	  */
    WST_EVT* current_event;


#ifdef WST_MODELLING_RPY 

    /** \brief Virtual table of functions to process events is only used by Rhapsody for compatibility reasons.  
    * \req{RXF-573}
	  */
    const WST_FSM_Vtbl* vtbl;

#else /* WST_MODELLING_RPY */

	/** \brief With all other modelling tools we just use one function pointer to get access to an event handling function  
    * \req{RXF-574}
	  */
   	WSTDispatchEvent        dispEventFunc;

#endif /* WST_MODELLING_RPY */


#ifndef WST_PORTS_DISABLED


	/** \brief iRiCReactive inheritance to support ports.  
    * \req{RXF-575} \req{RXF-550}
	  */
	IRiCReactive iRiCReactive;


#endif /* WST_PORTS_DISABLED */

  /** \brief Status of the FSM, e.g. \see WST_FSM_statusDefault  
    * \req{RXF-576}
	  */
    uint8	status;

  /** \brief Used to count the number of null transitions (transitions that do not have a trigger).  
    * \req{RXF-577}
	  */
    uint8	nullTransitionCount;

 /** \brief Attribute to store the value of the current state of the actual owner object.
    * \req{RXF-578}
    * Will also be accessed by the monitor of the Embedded UML Target Debugger.
	  */
	uint16 currentState;

	/** \brief Attribute to store the value of the state history of the actual owner object.  
    * \req{RXF-579}
	  */
	uint16 stateHistory;
};


#ifdef WST_MODELLING_RPY /* Rhapsody compatibility */

/** \brief Typedef for the pointer to the event cunsumption operation (Rhapsody compatibility) 
  * \req{RXF-546}
  */
typedef void                (*WSTConsumeEvent)(WST_FSM* const me, WST_EVT* event);

/** Typedef for the pointer to the operation getting called when the statechart could not consume an event
  * \req{RXF-1140}
  */
typedef void                (*WSTHandleEventNotConsumed)(WST_FSM* const me, WST_EVT* event);

/** \brief Typedef for the pointer to the cleanup operation - being used by delayed termination (Rhapsody compatibility) 
  * \req{RXF-547}
  */
typedef void				(*WSTObjectCleanupMethod)( void *me );

/** \brief Typedef for the pointer to the freeInstance static operation - being used by delayed termination (Rhapsody compatibility) 
  * \req{RXF-548}
  */
typedef void				(*WSTObjectFreeMethod)( void *me );

#endif /* WST_MODELLING_RPY */


#ifndef WST_PORTS_DISABLED


/** \brief Support for ports requires the base event support.  
  * \req{RXF-550} \req{RXF-551}
  */
struct WST_BaseEvent_t
{
    WST_EVT WST_event;
};


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/**
 * \brief Function that is called from the IWST_FSM virtual table and in turn calls WST_FSM_gen().
 * \req{RXF-550} \req{RXF-552}
 */
WSTBoolean WST_FSM_genInternal( void* const me, WST_EVT* event, WSTBoolean fromISR );

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#endif /* WST_PORTS_DISABLED */


/** \brief Defines for the different statuses the WST_FSM can have.
  * \req{RXF-554}
  */
#define WST_FSM_statusDefault						((uint8) 0x00U) /**< Status of an FSM: default.								*/
#define WST_FSM_statusTerminating					((uint8) 0x01U) /**< Status of an FSM: object is in termination.			*/
#define WST_FSM_statusBusy							((uint8) 0x02U) /**< Status of an FSM: FSM is busy.							*/
#define WST_FSM_statusInCleanup						((uint8) 0x04U) /**< Status of an FSM: object is in cleanup.				*/
#define WST_FSM_statusShouldDelete					((uint8) 0x08U) /**< Status of an FSM: object is scheduled to be deleted.	*/
#define WST_FSM_statusStarted						((uint8) 0x10U) /**< Status of an FSM: FSM is started.						*/
#define WST_FSM_statusShouldCompleteStartBehavior	((uint8) 0x20U) /**< Status of an FSM: Object should complete the
																		 																					start behavior event. 									*/
#define WST_FSM_statusFALSE							WST_FSM_statusDefault  /**< Status of an FSM: FALSE.						*/


#ifdef WST_MODELLING_RPY 

/** \brief Virtual table used to be able to call operations such as dispatching events, processing statecharts, etc.
	* It is only used by Rhapsody for compatibility reasons. 
  * \req{RXF-556}
  */

struct WST_FSM_Vtbl_t
{
	/** \brief Pointer to the event handling operation, usually an operation in a class that has a statechart. 
  	* \req{RXF-557}
  	*/
	WSTDispatchEvent        dispEventFunc;
	
	/** \brief Pointer to the operation, which in Rhapsody enters the FSM. 
	  * \req{RXF-558}
	  */
	WST_rootState_entDef    rootState_entDefFunc;
	
	/** \brief Unused, only for Rhapsody compatibility reasons. 
	  * \req{RXF-559}
	  */
	WST_NotUsed             rootState_serializeStates;

	/** \brief Pointer to the object destroy operation 
	  * \req{RXF-560}
	  */
	WSTObjectDestroyMethod  destroyMethod;
	
	/** \brief Pointer to the event cunsumption operation 
	  * \req{RXF-561}
	  */
	WSTConsumeEvent         consumeEvent;
	
	/** \brief Pointer to an operation that may handle events which could not be consumes by the FSM. 
	  * \req{RXF-562}
	  */
	WSTHandleEventNotConsumed	handleEventNotConsumed;

	/** \brief Pointer to an operation that may handle triggered operations which could not be consumes by the FSM. 
	  * \req{RXF-563}
	  */
	void*                   handleTONotConsumed;

#ifndef WST_FSM_DIRECT_DELETION

	/** \brief Pointer to the cleanup operation - being used by delayed termination (Rhapsody compatibility) 
	  * \req{RXF-564}
	  */
	WSTObjectCleanupMethod	cleanupMethod;

	/** \brief Pointer to the freeInstance static operation - being used by delayed termination (Rhapsody compatibility) 
	  * \req{RXF-565}
	  */
	WSTObjectFreeMethod		freeMethod;	

#endif  /* of !WST_FSM_DIRECT_DELETION */
	
};

#endif /* WST_MODELLING_RPY for vtable compatibility */


/* @MISRA_19.13,19.7=OFF PD-0002,FD-0001: Rhapsody compatibility: Concatenation operator needed to build function name generated by Rhapsody's code generator and a macros is used instead of a function to save resources, as only another function is mapped.*/
/** \brief For Rhapsody framework compatibality
  * \req{RXF-582}
  */
#define IS_COMPLETED(me,state)	state##_isCompleted(me)
/* @MISRA_19.13,19.7=ON */

/* @MISRA_19.7=OFF PD-0002: Macros used instead of functions to save resources, as only another function is mapped. */
/** \brief For Rhapsody framework compatibality
  * \req{RXF-583}
  */
#define CREPLY(retVal)	(params->ric_reply = (retVal))
/* @MISRA_19.7=ON */

/* @MISRA_19.13,19.7=OFF PD-0002,FD-0001: Rhapsody compatibility: Concatenation operator needed to build function name generated by Rhapsody's code generator and a macros is used instead of a function to save resources, as only another function is mapped.*/
/** \brief For Rhapsody framework compatibality
  * \req{RXF-584}
  */
#define IS_IN(me,state)	state##_IN(me)
/* @MISRA_19.13,19.7=ON */


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/** \brief Before deleting, we need to cancel any pending events or timeouts that have been sent/started.
  * \req{RXF-593}
  */
void				WST_FSM_cleanup(WST_FSM* const me);

/** \brief Generate an event for this statemachine.
  * \req{RXF-594}
  */
WSTBoolean			WST_FSM_gen(WST_FSM* const me, WST_EVT* event, WSTBoolean fromISR);


#ifndef WST_PORTS_DISABLED


/** \brief Return an event for an baseevent.
  * \req{RXF-592}
  */
WST_EVT* WST_FSM_getEvent(WST_BaseEvent* base);


#endif /* WST_PORTS_DISABLED */


/** \brief Decrement nulltransition counter.
  * \req{RXF-595}
  */
void				WST_FSM_popNullConfig(WST_FSM* const me);

/** \brief Increment nulltransition counter.
  * \req{RXF-596}
  */
void				WST_FSM_pushNullConfig(WST_FSM* const me);

/** \brief Set status flag that object with state machine can be deleted.
  * \req{RXF-597}
  */
void				WST_FSM_setShouldDelete(WST_FSM* const me, WSTBoolean  b);

/** \brief Starts the behaviour of the state machine.
  * \req{RXF-185}
  */
WSTBoolean			WST_FSM_start(WST_FSM* const me);

/** \brief handling of an event.
  * \req{RXF-598}
  */
WST_EVT_handleEventStatus WST_FSM_takeEvent(WST_FSM* const me, WST_EVT*  event);

/** \brief Used by triggered operations to bypass the event queue.
  * \req{RXF-599}
  */
WST_EVT_handleEventStatus	WST_FSM_handleSyncEvent(WST_FSM* const me, WST_EVT*  event);

/** \brief Terminates the state machine behaviour.
  * \req{RXF-600}
  */
void				WST_FSM_terminate(WST_FSM* const me);

/** \brief Initilizes this state machine (data only, not starting the state machine).
  * \req{RXF-187}
  */
#ifdef WST_MODELLING_RPY /* workaround for Rhapsody task parameter and vtable */
void				WST_FSM_init(WST_FSM* const me, void *  owner, const void* task, const WST_FSM_Vtbl *  vtbl);
#else /* of WST_MODELLING_RPY as workaround for Rhapsody task parameter and vtable */
void				WST_FSM_init(WST_FSM* const me, void *  owner);
#endif /* of WST_MODELLING_RPY as workaround for Rhapsody task parameter and vtable */


#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif /* of WST_FSM_H */

#endif /* WST_H */
