/**
* \ingroup runtime
* \class WST_TMR
* \brief TimeOut Class
*
* This class handles timeouts.
*
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_TMR.c 29010 2014-04-01 15:29:18Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_TMR.c $
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


/***     Methods implementation    ***/

/**
* \brief Initializes the timeout object.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_TMR_init(WST_TMR* const me)
{
	me->remainingTicks  =  (WST_TimeUnit_t)  0;
	me->timer_id        =  (WST_TMR_ID_t) 0;
	me->id              =  WST_TMR_id;
	me->destination     =  NULL;
	me->eventDestroy_f  =  (WST_EVT_destroy_f) NULL;
	me->nextTm          =  NULL;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Cleans up the timeout object.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_TMR_cleanup(WST_TMR* const me)
{
	if(me != NULL)
	{
		me->nextTm = NULL;
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




/**
* \brief Returns the timeout object's ID.
* \return Timeout object's ID.
*
* This function is necessary for the generated source code!! So do not delete.
*
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_TMR_ID_t WST_TMR_getTimerId( const WST_TMR* const me )
{
	return(me->timer_id);
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */
