/**
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_RXF_Main.c 30489 2014-10-24 13:53:50Z mspieker $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_RXF_Main.c $
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


/***********************************************************************
 *
 * Name		: main
 *
 * This is an example main program
 *
 ***********************************************************************/

#define WST_APPL_RUNNING_START_SEC_CODE_FAST
#include "WSTMemoryTypes.h"

extern sint16 WST_RXF_Main(sint16 argc, char_t* argv[]);


/* @MISRA_6.3=OFF ID-0009: Toolchain compatibility requires this interface */
 int main( void )
/* @MISRA_6.3=ON */
{


#ifndef	WST_COMPILER_INIT_AS_EMPTY_MACRO

	/* Initialize Compiler usage (for example heap) */

	WSTCompiler_Init();

#endif

	/* Initialize Target interface */
	WSTTarget_Init();





#ifdef WST_EXTENSION_TD
#ifdef WST_TARGET_DEBUGGING_ENABLED
	WSTMonitor_init();
#endif /* WST_TARGET_DEBUGGING_ENABLED */
#endif /* WST_EXTENSION_TD */
	
	(void)WST_RXF_Main( 0, NULL );


	/* Should never be reached. */		
	return 1;
}
/**** END main ****/

#define WST_APPL_RUNNING_END_CODE_FAST
#include "WSTMemoryTypes.h"
