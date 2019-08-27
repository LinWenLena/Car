#ifndef WSTRTOS_H
#define WSTRTOS_H

/**
* RTOS dependent prototypes and defines.
* This file is used, if no RTOS is part of the product.
*
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WSTRTOS.h 27745 2013-04-29 14:54:34Z mspieker $
* $URL: https://svn.willert.de/V6/trunk/Component/RTOS/OORTX/Source/Common/WSTRTOS.h $
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


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


extern timeUnit			WSTRTOS_getRxfTicks( void );
extern void				WSTRTOS_incrementRxfTicks( void );

#define WST_RXF_RUNNING_END_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




#endif /* WSTRTOS_H */
