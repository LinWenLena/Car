/**
* \ingroup memman
* \class WST_MEM
* \brief Memory Management Class: Memory Allocation
*
* Allocates needed memory and frees it, when not needed anymore.
*
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_MEM.c 30517 2014-10-30 15:54:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_MEM.c $
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





/* All dimensions are set via properties, which result in RxfDimensions.h
 * This includes the memory allocation package for allowing the management of static pools of objects.
 */

#define WST_SHOW_DIMENSION	/* Show dimensions of global structures */

#include "WST.h"

#ifdef WST_MEM_IMPLEMENT_REALLOC

#include <string.h> /* for memcpy() used by WST_MEM_reallocMemory() */

#endif /* WST_MEM_IMPLEMENT_REALLOC */


#define WST_RXF_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_MEM					itsMEM;
WST_MEM_Pool 		WSTSmallPool;
WST_MEM_Pool 		WSTMediumPool;
WST_MEM_Pool 		WSTLargePool;

/**
  * \brief Array of WSTSmallMemoryBlock objects to be used as the small memory buffers. The array size is configured via RxfDimensions.h
  * \req{RXF-889}
  */
struct WSTSmallMemoryBlock	WSTSmallMemoryBlocks[ WST_INITIAL_SMALL_BUFFERS ];

/**
  * \brief Array of WSTMediumMemoryBlock objects to be used as the medium memory buffers. The array size is configured via RxfDimensions.h
  * \req{RXF-890}
  */
struct WSTMediumMemoryBlock	WSTMediumMemoryBlocks[ WST_INITIAL_MEDIUM_BUFFERS ];

/**
  * \brief Array of WSTLargeMemoryBlock objects to be used as the large memory buffers. The array size is configured via RxfDimensions.h
  * \req{RXF-891}
  */
struct WSTLargeMemoryBlock	WSTLargeMemoryBlocks[ WST_INITIAL_LARGE_BUFFERS ];


#define WST_RXF_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */






/**
* \brief Cleans up the memory allocation class.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_MEM_Cleanup( void )
{
	itsMEM.itsLargePool = NULL;
	itsMEM.itsMediumPool = NULL;
	itsMEM.itsSmallPool = NULL;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Returns a pointer to new allocated memory of the given size.
* \param requestedSize Size of memory that is needed (in Bytes).
* \return Pointer to new allocated memory of the given size.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

MALLOC_RETURN_TYPE WST_MEM_getMemory( MALLOC_ARGUMENT_TYPE requestedSize )
{
	MALLOC_RETURN_TYPE	p = NULL;
	
	if ( requestedSize <= (MALLOC_ARGUMENT_TYPE) WST_SMALL_BUFFER_SIZE )
	{
		p = WST_MEM_Pool_getMemory(itsMEM.itsSmallPool);
		
#ifdef WST_CFG_HIGHWATERMARKS

		if ( (p != NULL) && (itsMEM.itsSmallPool->use > highwater.smallBuffersMax) )
		{
			highwater.smallBuffersMax++;
		}

#endif /* WST_CFG_HIGHWATERMARKS */

	}
	else if ( requestedSize <= (MALLOC_ARGUMENT_TYPE) WST_MEDIUM_BUFFER_SIZE )
	{
		
		p = WST_MEM_Pool_getMemory(itsMEM.itsMediumPool);

#ifdef WST_CFG_HIGHWATERMARKS

		if ( (p != NULL) && (itsMEM.itsMediumPool->use > highwater.mediumBuffersMax) )
		{
			highwater.mediumBuffersMax++;
		}

#endif /* WST_CFG_HIGHWATERMARKS */

	}
	else if ( requestedSize <= (MALLOC_ARGUMENT_TYPE) WST_LARGE_BUFFER_SIZE )
	{

		p = WST_MEM_Pool_getMemory(itsMEM.itsLargePool);

#ifdef WST_CFG_HIGHWATERMARKS

		if ( (p != NULL) && (itsMEM.itsLargePool->use > highwater.largeBuffersMax) )
		{
			highwater.largeBuffersMax++;
		}

#endif /* WST_CFG_HIGHWATERMARKS */

	}
	else
	{

#if ( defined NO_MALLOC ) || ( defined WST_FORCE_ALLOC_TOO_LARGE ) 
		WST_ERR_error( WST_ERR_ALLOC_TOO_LARGE );
#else	/* NO_MALLOC or WST_FORCE_ALLOC_TOO_LARGE */

	}

	if ( p == NULL )
	{
		/* We try to allocate requested size even when larger than the largest block
		 * or no more free blocks are available.
		 * If NO_MALLOC is defined, the error handler is being called.
		 */

		p = malloc( requestedSize );

#endif	/* NO_MALLOC or WST_FORCE_ALLOC_TOO_LARGE */

	}
	
#if defined( _DEBUG ) || defined( WST_FORCE_ALLOC_FAILED )

	if ( p == NULL )
	{
		WST_ERR_error( WST_ERR_ALLOC_FAILED );
	}

#endif	/* _DEBUG or WST_FORCE_ALLOC_FAILED */

	return p;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


/**
* \brief Frees the memory at the pointer destination.
* \param memory Pointer to memory that should be freed.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_MEM_returnMemory( FREE_ARGUMENT_TYPE memory )
{
	
/* @MISRA_11.4,17.4=OFF ID-0013: The address of the small buffer pool must be used in calculations to see if the address passed is that of a block in the small buffer pool or an address in the heap. */

	if ( (char_t *) memory <  (char_t *) WSTSmallMemoryBlocks + ( WST_INITIAL_SMALL_BUFFERS * sizeof( struct WSTSmallMemoryBlock ) ) &&
		 (char_t *) memory >= (char_t *) WSTSmallMemoryBlocks )

/* @MISRA_11.4,17.4=ON */

	{
		WST_MEM_Pool_returnMemory(itsMEM.itsSmallPool, memory);
	}
	/* @MISRA_11.4,17.4=OFF ID-0014: The address of the medium buffer pool must be used in calculations to see if the address passed is that of a block in the medium buffer pool or an address in the heap. */
	else if ( (char_t *) memory <  (char_t *) WSTMediumMemoryBlocks + ( WST_INITIAL_MEDIUM_BUFFERS * sizeof( struct WSTMediumMemoryBlock ) ) &&
			  (char_t *) memory >= (char_t *) WSTMediumMemoryBlocks )
	/* @MISRA_11.4,17.4=ON */
	{
		WST_MEM_Pool_returnMemory(itsMEM.itsMediumPool, memory);
	}
	/* @MISRA_11.4,17.4=OFF ID-0015: The address of the large buffer pool must be used in calculations to see if the address passed is that of a block in the large buffer pool or an address in the heap. */
	else if ( (char_t *) memory <  (char_t *) WSTLargeMemoryBlocks + ( WST_INITIAL_LARGE_BUFFERS * sizeof( struct WSTLargeMemoryBlock ) ) &&
			  (char_t *) memory >= (char_t *) WSTLargeMemoryBlocks )
	/* @MISRA_11.4,17.4=ON */
	{
		WST_MEM_Pool_returnMemory(itsMEM.itsLargePool, memory);
	}
	else /* memory to be returned is not memory from our static pools */
	{

#if ( defined NO_MALLOC ) || ( defined WST_FORCE_ALLOC_TOO_LARGE ) 
		WST_ERR_error( WST_ERR_INVALID_MEMORY_PTR );
#else
		/* If we allowed using malloc for larger memory blocks than in the large static pool
		 * or the buffer was full, we need to return memory outside of our blocks via free().
		 */
		
		free( memory );
		
#endif	/* NO_MALLOC or WST_FORCE_ALLOC_TOO_LARGE */
	}
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


/**
* \brief Returns the large memory pool.
* \return Large memory pool pointer.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_MEM_Pool* WST_MEM_getItsLargePool( void )
{
	return itsMEM.itsLargePool;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Sets the large memory pool.
* \param p_WST_MEM_Pool Large memory pool pointer.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_MEM_setItsLargePool( WST_MEM_Pool*  p_WST_MEM_Pool )
{
	itsMEM.itsLargePool = p_WST_MEM_Pool;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Returns the medium memory pool.
* \return Medium memory pool pointer.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_MEM_Pool* WST_MEM_getItsMediumPool( void )
{
	return itsMEM.itsMediumPool;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Sets the medium memory pool.
* \param p_WST_MEM_Pool Medium memory pool pointer.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_MEM_setItsMediumPool( WST_MEM_Pool*  p_WST_MEM_Pool )
{
	itsMEM.itsMediumPool = p_WST_MEM_Pool;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Returns the small memory pool.
* \return Small memory pool pointer.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

WST_MEM_Pool* WST_MEM_getItsSmallPool( void )
{
	return itsMEM.itsSmallPool;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */



/**
* \brief Sets the small memory pool.
* \param p_WST_MEM_Pool Small memory pool pointer.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_MEM_setItsSmallPool( WST_MEM_Pool*  p_WST_MEM_Pool )
{
	itsMEM.itsSmallPool = p_WST_MEM_Pool;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */




#ifdef WST_MEM_IMPLEMENT_REALLOC

/**
* \brief Reallocates the given memory block to the new size.
* \param currentSize The current size of the memory block.
* \param newSize The new size of memory that is needed (in Bytes).
* \return Pointer to reallocated memory of the new given size. Will return NULL if realloc failed.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

MALLOC_RETURN_TYPE WST_MEM_reallocMemory( FREE_ARGUMENT_TYPE contents, const size_t currentSize, const size_t newSize )
{
	MALLOC_RETURN_TYPE	result = NULL;

	/* If the given pointer is NULL, just allocate and return memory of the new size */
	if(	contents == NULL )
	{
		result = WST_MEM_getMemory( newSize );
	}
	/* If the new size is zero, return NULL and give back 'old' memory */
	else 
	{
		if( newSize == 0U )
		{
			WST_MEM_returnMemory( contents );
		}
		else
		{
			/* Allocate memory of the new size from the best fitting block size */
			result = WST_MEM_getMemory( newSize );
			
			if( result != NULL )
			{
				/* If the memory size should increase, perform a memory copy operation of the CURRENT size */
				if( newSize > currentSize )
				{
					memcpy( result, contents, currentSize );
				}
				/* If the memory size should decrease, perform a memory copy operation of the NEW size */
				else
				{
					memcpy( result, contents, newSize );
				}
				
				/* return 'old' memory block */
				WST_MEM_returnMemory( contents );
			}
		}
	}	

	return result;
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif /* WST_MEM_IMPLEMENT_REALLOC */




/**
* \brief Initializes the internal memory pools.
*/

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

void WST_MEM_init(void)
{
	itsMEM.itsLargePool	= NULL;
	itsMEM.itsMediumPool	= NULL;
	itsMEM.itsSmallPool	= NULL;

	WST_MEM_Pool_init( &WSTSmallPool,  (uint16) WST_INITIAL_SMALL_BUFFERS,  (uint16) sizeof( struct WSTSmallMemoryBlock ),  WSTSmallMemoryBlocks );
	WST_MEM_Pool_init( &WSTMediumPool, (uint16) WST_INITIAL_MEDIUM_BUFFERS, (uint16) sizeof( struct WSTMediumMemoryBlock ), WSTMediumMemoryBlocks);
	WST_MEM_Pool_init( &WSTLargePool,  (uint16) WST_INITIAL_LARGE_BUFFERS,  (uint16) sizeof( struct WSTLargeMemoryBlock ),  WSTLargeMemoryBlocks );

	WST_MEM_setItsSmallPool( &WSTSmallPool );
	WST_MEM_setItsMediumPool( &WSTMediumPool );
	WST_MEM_setItsLargePool( &WSTLargePool );
}

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */
