/**
* \defgroup error Error Handling Package
*
*/

/**
* \ingroup error
* \class WST_ERR
* \brief Error handler of OO RTX, is used by OO RTX itself, but a user may also call it.
* You may overload this function, and implement it according to your needs.
*
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_ERR.c 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_ERR.c $
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


/**
* \brief RTX error handler.
* \param wstErrorCode enumerated value as defined in WST_ERR.h
* \param additionalArg Additional error handler argument, reserved for use by the application.
* It is highly recommended that the user overrides and implements this method
* according to application specific needs. The default implementation is an endless loop,
* so that it will never return and allow viewing the error code argument via debugger.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_ERR_error( WST_ERR_Code wstErrorCode )
{


/*lint -save -e716 while(1) ...  */
    while( WSTTRUE )
    {
   		/* ToDo: Implement usage specific error behavior */
   		wstErrorCode = wstErrorCode;
    }
/*lint -restore */
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */
