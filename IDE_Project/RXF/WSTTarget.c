/**
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WSTTarget.c 29016 2014-04-03 12:56:38Z mspieker $
* $URL: https://svn.willert.de/V6/trunk/Component/CompilerAndTarget/Keil_ARM/Source/Common/WSTTarget.c $
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


/* The ARM target supports multiple compilers:
 * 
 * - The KEIl ARM RealView compiler.
 *   Specific sections are enclosed by testing the constant WST_COMPILER_KEILRV.
 * 
 *   We also have provided an example implementation for Critical Region functions 
 *   based on SWI handlers using the constant WST_TARGET_ARM_USE_SWI_FOR_CRITICAL_REGIONS
 * 
 * - The IAR ARM compiler
 *   Specific sections are enclosed by testing the constant WST_COMPILER_IAR
 *
 * - The native ARM RealView compiler.
 *   Specific sections are enclosed by testing the constant WST_COMPILER_REALVIEW
 *
 * The interface towards the OO RTX is the same, but depending on the toolchain used,
 * and WST_TARGET_ARM_USE_SWI_FOR_CRITICAL_REGIONS, details like SWI handlers and keywords differ.
 * 
 */
 
 

#include "WST.H"


#include <LPC17xx.H>		/* Vectored Interrupt Controller, derivate dependant  */
#include <system_lpc17xx.h>
#include "core_cm3.h"




#define WST_RXF_RUNNING_START_SEC_CODE_SLOW
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WSTTarget_sleep( timeUnit aTime ) 
{
  aTime = aTime; /* Prevent unused argument warning. */
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_SLOW
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


/* RiCCriticalRegion_Enter() */
void WSTTarget_enterCriticalRegion( void )
{
__disable_irq();  // Disable Interrupts
}


/* RiCCriticalRegion_Exit() */
void WSTTarget_exitCriticalRegion( void )
{
__enable_irq();  // Disable Interrupts
}


void WSTTarget_Init( void )
{
SystemInit();
#ifdef WST_RTOS_OORTX
SysTick_Config(SystemCoreClock / 100 - 1);   /* Generate interrupt each 10 ms     */
#endif	/* WST_RTOS_OORTX */
}


void WSTTarget_Cleanup( void )
{
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



#ifdef WST_RTOS_OORTX

#include <LPC17xx.H>		/* Vectored Interrupt Controller, derivate dependent  */


#define WST_RXF_RUNNING_START_SEC_DATA_INIT_32_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#define WST_RXF_RUNNING_STOP_SEC_DATA_INIT_32_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void SysTick_Handler (void) {           /* SysTick Interrupt Handler (10ms)    */
	WSTRTOS_incrementRxfTicks();
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void os_def_interrupt( void ) __irq
{
  /* Default Interrupt Function: may be called when timer ISR is disabled */
}


#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#endif	/* WST_RTOS_OORTX */
