#ifndef WSTTARGET_H
#define WSTTARGET_H

#ifdef __cplusplus
extern "C" {
#endif

/**
* Target specific functionality is encapsulated in this module.
* 
* \ingroup Adaptation
*
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WSTTarget.h 30194 2014-09-30 12:18:33Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/CompilerAndTarget/Keil_ARM/Source/Common/WSTTarget.h $
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

/* The ARM target supports multiple compilers:
 * 
 * - The KEIl ARM RealView compiler.
 *   Specific sections are enclosed by testing the constant WST_COMPILER_KEILRV
 * 
 * - The IAR ARM compiler
 *   Specific sections are enclosed by testing the constant WST_COMPILER_IAR
 *
 * - The native ARM RealView compiler.
 *   Specific sections are enclosed by testing the constant WST_COMPILER_REALVIEW
 *
 * 
 */

#include "WSTCompilerTypes.h"

/**
 * \brief Defines the granularity of the system tick
 * \req{RXF-1161}
 */
#define WST_MS_PER_TICK		10

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


void 					WSTTarget_Init( void );
void 					WSTTarget_Cleanup( void );


#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/* For Keil RTX the interrupts need to be disabled the target specific way,
 * as RTX does not provide these functions.
 */
void					WSTTarget_enterCriticalRegion( void );
void					WSTTarget_exitCriticalRegion( void );
	
#define WST_RXF_RUNNING_START_SEC_CODE_SLOW
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WSTTarget_sleep( timeUnit aTime );

#define WST_RXF_RUNNING_STOP_SEC_CODE_SLOW
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#ifdef __cplusplus
}
#endif

#endif  /* of WSTTARGET_H */
