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
* $Id: WST_CFG.c 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_CFG.c $
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


#define WST_SHOW_DIMENSION				/**< Show dimensions for global structures.		*/
#define WST_ALLOCATE_WSTDIMENSION		/**< Allocate global structures for WST_CFG.c.	*/


#include "WST.h"



#define WST_RXF_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#ifdef WST_CFG_HIGHWATERMARKS

WST_CFG_highwater	highwater = { 
							0u,			/* uint16	smallBuffersMax		*/
							0u,			/* uint16	mediumBuffersMax	*/
							0u,			/* uint16	largeBuffersMax		*/
							0u,			/* uint16	timeoutsMax			*/
							
							WSTFALSE	/* WSTBoolean bufferOverflow	*/
						};

#endif /* WST_CFG_HIGHWATERMARKS */

WST_TMR								WST_TMM_itsTimeout[ WST_MAX_TIMEOUTS ];

#define WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

uint32 WST_CFG_getMaxTimeouts( void )
{
	return WST_MAX_TIMEOUTS;
}


#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */
