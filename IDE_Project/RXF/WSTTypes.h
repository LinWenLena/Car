#ifdef WST_H

#ifndef WSTTYPES_H
#define WSTTYPES_H

/**
 *
 * $Id: WSTTypes.h 29678 2014-07-25 13:54:16Z mspieker $
 * $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/Common/WSTTypes.h $
 *
 * Willert Software Tools - Realtime eXecution Framework
 *
 * This file is for types and prototypes used in Rhapsody Container Classes. 
 *
 * Email: support@willert.de
 *
 */
 
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

#include <stddef.h>							/* NULL, size_t							*/

#include "RxfConstants.h"
#include "WSTProduct.h"
#include "WSTCompiler.h"					/* gen_ptr, sint32						*/
#include "WSTCompilerTypes.h"				/* struct_t								*/
#include "WST_RXF_RTOS.h"							/* WSTTRUE								*/
#include "WST_MEM.h"				/* WST_MEM_getMemory()				*/


typedef sint32			 WST_INT32;
typedef char			 WST_CHAR8;
typedef const void*		 const_gen_ptr;


#define STATIC			 static

#ifndef	WSTGETMEMORY_DEFINED
#define WSTGETMEMORY_DEFINED

#define	WSTGetMemory( requestedSize )			WST_MEM_getMemory( requestedSize )
#define	WSTReturnMemory( area )					WST_MEM_returnMemory( area )
#define WSTRealloc( area, oldSize, newSize )	WST_MEM_reallocMemory( area, oldSize, newSize )
		
#endif	/* WSTGETMEMORY_DEFINED */


#endif	/* WSTTYPES_H */

#endif /* WST_H */
