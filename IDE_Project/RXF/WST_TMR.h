#ifdef WST_H

#ifndef WSTTIMEOUT_H
#define WSTTIMEOUT_H

/**
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_TMR.h 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_TMR.h $
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

/** \brief Timer ID has the same type as an event ID. It is used to specify individual timeout transitions while the event ID just specifies the event as timeout event.
  * \req{RXF-627}
  */
typedef WST_EVT_ID_t    WST_TMR_ID_t;

/** For a highly optimized performance the RXF may cast a \see WST_EVT structure pointer to WST_TMR to
 * access certain attributes. Thus the order of attributes may not be freely changed, it must echo WST_EVT.
 * This is since when a timeout expires, it is passed to the event queue as though it was an event.
 */
struct WST_TMR_t
{
	/** \brief WST_FSM object that the event is destined for. 
	  * \req{RXF-684}
	  */
	WST_FSM*       			destination;

	/** \brief Destroy function pointer, important for dynamic vs. static memory allocation. 
	  * \req{RXF-685}
	  */
	WST_EVT_destroy_f       eventDestroy_f;

	/** \brief Identifier of the event. 
	  * \req{RXF-686}
	  */
	WST_EVT_ID_t            id;

	/** \brief TRUE, if the event is static and should not be deleted after consumption. 
	  * \req{RXF-687}
	  */
	WSTBoolean              isStatic;
	
#ifndef WST_PORTS_DISABLED


	/** \brief "port stamp": the address of the port through which the event was sent, if ports are supported and enabled. 
	  * \req{RXF-688}
	  */
	void                    *port;


#endif /* WST_PORTS_DISABLED */


	/** \brief next Pointer to the next Event in the event queue 
	  * \req{RXF-689}
	  */
	WST_EVT                 *next;

	/** \brief The number of system clock ticks remaining before the timeout expires. 
	  * \req{RXF-615}
	  */
	WST_TimeUnit_t          remainingTicks;

	/** \brief Identifier specific to a Timeout.
	  * \req{RXF-616}
	  * Not to be confused with the event id, which just identifies this event to be a timeout event.
	  */
	WST_TMR_ID_t            timer_id;

	/** Pointer to the next timeout for fast handling. 
	  * \req{RXF-617}
	  */
	WST_TMR*       nextTm;
};


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/**  
 * \brief Initializes a timer by setting its attributes to default values. 
 * \req{RXF-619} 
 */
void  WST_TMR_init(WST_TMR* const me);

/**  
 * \brief Clears the next pointer to another timeout. 
 * \req{RXF-620}
 */
void  WST_TMR_cleanup(WST_TMR* const me);

/**  
 * \brief Initializes a timer by setting its attributes to default values. 
 * \req{RXF-621}
 */
WST_TMR_ID_t  WST_TMR_getTimerId(const WST_TMR* const me);


#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */
#endif /* of WSTTIMEOUT_H */

#endif /* WST_H */
