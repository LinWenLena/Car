#ifdef WST_H

#ifndef WST_ERR_H
#define WST_ERR_H

/**
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_ERR.h 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_ERR.h $
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

/** \brief A enumaration listing of all available error codes which may happen inside the RXF.
  * \req{RXF-680}
  * All the possible WST errors that can occur.
  * These are to be handled by an error routine.
  * errors are noted via WST_ERR_error() .
  */
  
  
  
typedef enum WST_ERR_Code_t
{
    WST_ERR_NONE	=   0,
    WST_ERR_EMPTY_ME_PTR					 =   1,
    WST_ERR_EVENT_QUEUE_FULL				 =   2,
    WST_ERR_EVENT_NULL						 =   3,
    WST_ERR_EVENT_QUEUE_EMPTY				 =   4,
    WST_ERR_EVENT_CANCELLED					 =   5,
    WST_ERR_EVENT_DISCARDED					 =   6,
    WST_ERR_EVENT_NULL_DEST					 =   7,
    WST_ERR_EVENT_QUEUE_CREATION_FAILED		 =   8,
    WST_ERR_EVENT_QUEUE_GET_FAILED			 =   9,
    WST_ERR_REALLOC_MEMORYPOOL				 =  10,
    WST_ERR_INFINITE_NULL_TRANSITIONS		 =  11,
    WST_ERR_NO_LAST_STATE_IN_HISTORY		 =  12,
    WST_ERR_TOO_MANY_NULL_CONFIGS			 =  13,
    WST_ERR_TOO_FEW_NULL_CONFIGS			 =  14,
    WST_ERR_NULL_DESTINATION				 =  15,
    WST_ERR_ALLOCATING_ANOTHER_MEMORYPOOL	 =  16,
    WST_ERR_EMPTY_MEMORY_PTR				 =  17,
    WST_ERR_EMPTY_VTBL_PTR					 =  18,
    WST_ERR_EMPTY_STATE_PTR					 =  19,
    WST_ERR_EMPTY_STR_PTR					 =  20,
    WST_ERR_CONFIG_ERROR					 =  21,
    WST_ERR_CONFIG_ERROR_LARGER				 =  22,
    WST_ERR_NO_MALLOC						 =  23,
    WST_ERR_ALLOC_FAILED					 =  24,
    WST_ERR_NOT_IMPLEMENTED					 =  25,
    WST_ERR_VERSION_ERROR					 =  26,
    WST_ERR_INVALID_MEMORY_PTR				 =  27,
    WST_ERR_ALLOC_TOO_LARGE					 =  28,
    WST_ERR_TIMEOUT_HEAP_FULL	 			 =  29,
    WST_ERR_TIMEOUT_NOT_FOUND	 			 =  30,
	WST_ERR_TIMEOUT_TMPBUFFER_FULL			 =  31,





	/* We use 80 and up for container class related errors */
    WST_ERR_CON_LST_INVALID 				 =  80,
	WST_ERR_CON_LST_EMPTY					 =  81,
	WST_ERR_CON_INDEX_OUT_OF_BOUNDS			 =  82	

} WST_ERR_Code;

/** \brief An additional argument of this data type may be passed to the error handler to ease error analysis.
  * \req{RXF-683}
  */
typedef uint32	WST_ERR_additionalArg_t;

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/** \brief Called by the RXF if any error is detected.
  * \req{RXF-681}
  */
void WST_ERR_error( WST_ERR_Code wstErrorCode );

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif  /* of WST_ERR_H */

#endif /* WST_H */
