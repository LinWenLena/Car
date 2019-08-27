#ifdef WST_H

#ifndef WST_CFG_H
#define WST_CFG_H

/**
* \brief Runtime configuration for the RXF.
* \ingroup runtime
* \class WST_CFG
*
* This class handles configuration dependend allocations like a queue for timeout events
* and the highwatermarks structure.
*
* All dimensions to be configured are set inside the modelling tool, which result in
* RxfDimensions.h.
*
* Willert Software Tools - Realtime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_CFG.h 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_CFG.h $
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


#ifdef WST_CFG_HIGHWATERMARKS

/** \see highwater */
struct WST_CFG_highwater_t
{
	/** \brief Largest number of buffers from the small WST_MEM_Pool that have been used during the program execution. 
	 *  \req{RXF-750}
	 */
	uint16		smallBuffersMax;
	
	/** \brief Largest number of buffers from the medium WST_MEM_Pool that have been used during the program execution. 
	 *  \req{RXF-751}
	 */
	uint16		mediumBuffersMax;
	
	/** \brief Largest number of buffers from the large WST_MEM_Pool that have been used during the program execution. 
	 *  \req{RXF-752}
	 */
	uint16		largeBuffersMax;

	/** \brief Largest number of timeout events that have been queued in the timer queue during the program execution. 
	 *  \req{RXF-753}
	 */
	uint16		timeoutsMax;


	/**
	  * \brief If any of the highwatermarks exceeded the maximum that was configured for the application, the bufferOverflow member will be TRUE.
	  * \req{RXF-754}
	  *
	  * This should not happen in a well configured application.
	  * To prevent alignment problems (WSTBoolean may be a byte), we use this as last member. 
	 */
	WSTBoolean	bufferOverflow;
		
};


#define WST_RXF_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/** \brief High water marks represent the maximum usage of RXF resources.
 *  \req{RXF-5} \req{RXF-43}
 *
 * They can be used to keep track of the highest usage level of RXF resources that have occurred
 * durin runtime. This includes small, medium and large buffers as well as event and timeout queues.
 * The highwater structure is useful to verify, if the queue and buffer sizes are configured well
 * for the needs of the application.
 */
 
extern WST_CFG_highwater	highwater;

#define WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#endif /* WST_CFG_HIGHWATERMARKS */

#define WST_RXF_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/** \brief Static array for all RXF timeouts.
  * \req{RXF-756}
  *
  *  The global array variable is specified and depends on the RxfDimensions define for WST_MAX_TIMEOUTS.
  *  It is used as static array for all RXF timeouts available in the TMM.
  */
extern WST_TMR						WST_TMM_itsTimeout[];

#define WST_RXF_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/** \brief Get the maximum number of RXF timeouts.
  * \req{RXF-755}
  *
  *   Returns the maximum number of timeouts. This is done via getter operation in WST_CFG, because WST_TMM which accesses
  *   this operation is not a dimensioning source and the return value depends on WST_MAX_TIMEOUTS from RxfDimensions.h.
  */
uint32 WST_CFG_getMaxTimeouts( void );

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#endif /* of WST_CFG_H */

#endif /* WST_H */
