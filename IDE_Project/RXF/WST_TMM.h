#ifdef WST_H

#ifndef WSTTIMERMANAGER_H
#define WSTTIMERMANAGER_H

/**
 *
 *
 *
 * $Id: WST_TMM.h 30517 2014-10-30 15:54:59Z eroemer $
 * $URL: https://svn.willert.de/V6/trunk/Component/RXF/OORTX/Source/C/WST_TMM.h $
 *
 * Willert Software Tools - Realtime eXecution Framework
 *
 *
 * Email: support@willert.de
 *
 *
 *
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

/**
 * \brief Represents the number of processed system ticks
 * \req{RXF-472}
 */
extern WST_TimeUnit_t WST_TMM_processedTicks;

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

/**
 * \brief Structure for the temporary timeout buffer
 * \req{RXF-1524}
 */
struct WST_TMM_irqTimeout{
	WST_FSM *destination;
	WST_TMR_ID_t id;
	WST_TimeUnit_t time;
};

/* This class manages all the timeouts, keeping two lists, one free list and one busy list.
 * As timeouts are allocated, they move from the free list to the busy list.
 * When they expire or are unscheduled, they move back from the busy list to the free list.
 * Timeouts are created initially and are never deleted.
 */
 

struct WST_TMM_t
{
#ifdef WST_CFG_HIGHWATERMARKS
	/**
	 * \brief Keep track of timeouts being used in the RXF using the count attribute.
	 * \req{RXF-480}
	 */
	uint16 count;
#endif /* WST_CFG_HIGHWATERMARKS */
	
#if WST_TMM_MAX_IRQ_TIMEOUTS > 0
	/**
	 * \brief Indicates if the application is in a critical region.
	 * \req{RXF-1525}
	 */
	volatile uint8 mutex;
	
	/**
	 * \brief Ring buffer for timeouts used by interrupt service routines.
	 * \req{RXF-1526}
	 */
	struct WST_TMM_irqTimeout irqTimeouts[WST_TMM_MAX_IRQ_TIMEOUTS];
	
	/**
	 * \brief Counter representing how many entries in the buffer for timeouts used by interrupt service rutines are in use.
	 * \req{RXF-1530}
	 */
	uint16 irqTimeoutCount;
	
	/**
	 * \brief Counter representing the maximum of how many entries in the buffer for timeouts used by interrupt service routines have been in use.
	 * \req{RXF-1531}
	 */
	uint16 irqTimeoutHighwater;
	
	/**
	 * \brief Write pointer for the interrupt buffer.
	 * \req{RXF-1527}
	 */
	uint16 writePtr;
	
	/**
	 * \brief Read pointer for the interrupt buffer.
	 * \req{RXF-1528}
	 */
	uint16 readPtr;
	
#endif /* WST_TMM_MAX_IRQ_TIMEOUTS > 0 */

	/**
	 * \brief Pointer to the first timeout in use, which builds a list of all timouts currently in use.
	 * \req{RXF-479}
	 */
	WST_TMR* itsBusyList;

	/**
	 * \brief Pointer to the first available timeout, which builds a list of all free timeouts.
	 * \req{RXF-513}
	 */
	WST_TMR* itsFreeList;

};

#define WST_RXF_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/**
 * \brief The timer manager is a singleton and globally declared.
 * \req{RXF-514}
 * */
extern WST_TMM mainTMM;

#define WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



#define WST_RXF_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


extern WST_TMR						WST_TMM_itsTimeout[];


#define WST_RXF_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/**
 * \brief Schedule a timeout by adding it to the busy list.
 * \req{RXF-515}
 */
void WST_TMM_start( WST_TimeUnit_t delayTime, WST_TMR_ID_t id, WST_FSM* destination );


/**
 * \brief Schedule a timeout by adding it to the busy list.
 * \req{RXF-1529}
 */
void WST_TMM_handleIRQTimeouts( void );

/**
 * \brief Cancel any timeouts that have the passed destination. This is since this reactive has been deleted.
 * \req{RXF-516}
 */
void WST_TMM_cancelEvents(const WST_FSM* destination);

/**
 * \brief Returns an expired timeout event, if there is one in the list of busy timeouts.
 * \req{RXF-517}
 */
WST_TMR* WST_TMM_getExpiredTimeout(void);

/**
 * \brief The timeout has expired so put it back on the free list.
 * \req{RXF-518}
 */
void WST_TMM_putBack(WST_TMR* timeout);

/**
 * \brief Remove the timeout with the passed id and destination.
 * \req{RXF-519}
 */
void WST_TMM_stop( WST_TMR_ID_t id, const WST_FSM* destination );

/**
 * \brief For the first timeout in the busy list, decrement the number of remaining ticks.
 * \req{RXF-520}
 */
void WST_TMM_tick( sint16 elapsedTime );

/**
 * \brief For every timeout, decrement the remaining tick time and if any have expired then remove them and put them on the event queue
 * \req{RXF-521}
 */
void WST_TMM_processTimeouts(void);


/**
 * Defined in WST_CFG.c, because it relies on the current configuration defines.
 * \req{RXF-523}
 */
WST_TimeUnit_t WST_TMM_WSTTimeToTicks( WST_TimeUnit_t delayTime );

/**
 * \brief Defined in WST_CFG.c, because it relies on the current configuration defines.
 * \req{RXF-524}
 */
void WST_TMM_init( void );

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif /* of WSTTIMERMANAGER_H */

#endif /* WST_H */
