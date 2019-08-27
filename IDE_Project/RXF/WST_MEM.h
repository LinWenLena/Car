#ifdef WST_H

#ifndef WST_MEM_H
#define WST_MEM_H

/**
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_MEM.h 30194 2014-09-30 12:18:33Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_MEM.h $
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


#ifndef WST_DO_NOT_MAP_MALLOC
#if (defined NO_MALLOC) || (defined WST_MAP_MALLOC)

/*lint -save -e652 -e683        652: #define of symbol declared previously, 683: function #define'd, semantics may be lost  */

/**
  * \brief Mapping to use thread safe versions of malloc etc.
  * \req{RXF-707}
  */
#define malloc		WST_MEM_getMemory

/**
  * \brief Mapping to use thread safe versions of free etc.
  * \req{RXF-708}
  */
#define free		WST_MEM_returnMemory	/**< \see malloc */


/**
  * \brief  calloc is not being mapped and supported.
  * \req{RXF-713}
  */
#ifdef calloc
#undef calloc
#endif /* calloc */

/**
  * \brief Mapping of realloc is currently not supported, because the stdlib.h function just needs pointer and new size
  * as arguments, but WST_MEM_reallocMemory expects three arguments: the pointer, current size and new size.
  * \req{RXF-714}
  */
#ifdef realloc
#undef realloc
#endif /* realloc */

/*lint -restore */

#else /* NO_MALLOC or WST_MAP_MALLOC */
#ifdef WST_RXF_RXF /* working with an RTOS */

#define malloc		WST_OSW_MEM_malloc
#define free		WST_OSW_MEM_free

#endif /* WST_RXF_RXF, working with an RTOS */
#endif /* NO_MALLOC or WST_MAP_MALLOC */
#endif /* !WST_DO_NOT_MAP_MALLOC */



/** Holding the three memory pools for static memory allocation. */
struct WST_MEM_t
{
	/** 
	  * \brief Small memory pool. Size and number of elements are configured via \see RxfDimensions.h
	  * \req{RXF-716}
	  */
	WST_MEM_Pool* itsSmallPool;

	/** 
	  * \brief Medium memory pool. Size and number of elements are configured via \see RxfDimensions.h 
	  * \req{RXF-717}
	  */
    WST_MEM_Pool* itsMediumPool;
    
	/** 
	  * \brief Large memory pool. Size and number of elements are configured via \see RxfDimensions.h
	  * \req{RXF-718}
	  */
    WST_MEM_Pool* itsLargePool;
    


};

#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/** 
  * \brief If the memory desired can be obtained from one of the fixed buffers, then return memory from the appropriate pool, else simply allocate the necessary memory 
  * \req{RXF-75}
  */
MALLOC_RETURN_TYPE		WST_MEM_getMemory( MALLOC_ARGUMENT_TYPE requestedSize );

/** 
  * \brief Frees the memory at the pointer destination of the given size. 
  * \req{RXF-719}
  */
void					WST_MEM_returnMemory( FREE_ARGUMENT_TYPE memory );	/* return the memory.*/


#ifdef WST_MEM_IMPLEMENT_REALLOC
/** 
  * \brief Reallocates the given memory block to the new size. 
  * \req{RXF-720}
  */
MALLOC_RETURN_TYPE		WST_MEM_reallocMemory( FREE_ARGUMENT_TYPE, const MALLOC_ARGUMENT_TYPE currentSize, const MALLOC_ARGUMENT_TYPE newSize );	/* Reallocate the given memory block to the new size */
#endif /* WST_MEM_IMPLEMENT_REALLOC */

/**
  * \brief Initializes the internal memory pools.
  * \req{RXF-721}
  */
void					WST_MEM_init( void );

/** 
  * \brief Cleans up the memory allocation class. 
  * \req{RXF-722}
  */
void					WST_MEM_Cleanup( void );

/** 
  * \brief Returns the pointer to itsSmallPool. 
  * \req{RXF-723}
  */
WST_MEM_Pool*	WST_MEM_getItsSmallPool( void);

/** 
  * \brief Set the pointer for itsSmallPool. 
  * \req{RXF-724}
  */
void					WST_MEM_setItsSmallPool( WST_MEM_Pool*  p_WST_MEM_Pool );

/** 
  * \brief Returns the pointer to itsMediumPool. 
  * \req{RXF-725}
  */
WST_MEM_Pool*	WST_MEM_getItsMediumPool( void);

/** 
  * \brief Set the pointer for itsMediumPool. 
  * \req{RXF-726}
  */
void					WST_MEM_setItsMediumPool( WST_MEM_Pool*  p_WST_MEM_Pool );

/** 
  * \brief Returns the pointer to itsLargePool. 
  * \req{RXF-727}
  */
WST_MEM_Pool*	WST_MEM_getItsLargePool( void );

/** 
  * \brief Set the pointer for itsLargePool. 
  * \req{RXF-728}
  */
void					WST_MEM_setItsLargePool( WST_MEM_Pool*  p_WST_MEM_Pool );



#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */





/**
  * \brief Represents the WSTSmallMemoryBlock, WSTMediumMemoryBlock and WSTLargeMemoryBlock. But in C there is no inheritance available, so this is just a dummy representation.
  * \req{RXF-737}
  */
struct WSTMemoryBlock
{
    struct WSTMemoryBlock*			next;
    int_t							memory[ 1 ];																										/* No allocation based on this type is done, but the type is used. Force even addressing */
};


#ifdef	WST_SHOW_DIMENSION
/**
  * \brief Representing one small memory block, the size of the contained data is specified in RxfDimensions.h via define WST_SMALL_BUFFER_SIZE.
  * \req{RXF-738}
  */
struct WSTSmallMemoryBlock
{
    struct WSTSmallMemoryBlock* 	next;
    int_t							memory[ ( (uint16) WST_SMALL_BUFFER_SIZE  + ( (uint16) sizeof( int_t ) - 1u ) ) / (uint16) sizeof( int_t ) ];		/* This dimension is set via a property	or known as 1 */
};

/**
  * \brief Representing one medium memory block, the size of the contained data is specified in RxfDimensions.h via define WST_MEDIUM_BUFFER_SIZE.
  * \req{RXF-740}
  */
struct WSTMediumMemoryBlock
{
    struct WSTMediumMemoryBlock*	next;
    int_t                			memory[ ( (uint16) WST_MEDIUM_BUFFER_SIZE + ( (uint16) sizeof( int_t ) - 1u ) ) / (uint16) sizeof( int_t ) ];		/* This dimension is set via a property	or known as 1 */
};

/**
  * \brief Representing one large memory block, the size of the contained data is specified in RxfDimensions.h via define WST_LARGE_BUFFER_SIZE.
  * \req{RXF-742}
  */
struct WSTLargeMemoryBlock
{
    struct WSTLargeMemoryBlock* 	next;
    int_t							memory[ ( (uint16) WST_LARGE_BUFFER_SIZE +  ( (uint16) sizeof( int_t ) - 1u ) ) / (uint16) sizeof( int_t ) ];		/* This dimension is set via a property	or known as 1 */
};

#else	/* WST_SHOW_DIMENSION	*/

/**
  * \brief Representing one small memory block, the size of the contained data is specified in RxfDimensions.h via define WST_SMALL_BUFFER_SIZE.
  * \req{RXF-739}
  */
struct WSTSmallMemoryBlock
{
    struct WSTSmallMemoryBlock* 	next;
    int_t							memory[ 1 ];
};

/**
  * \brief Representing one medium memory block, the size of the contained data is specified in RxfDimensions.h via define WST_MEDIUM_BUFFER_SIZE.
  * \req{RXF-741}
  */
struct WSTMediumMemoryBlock
{
    struct WSTMediumMemoryBlock*	next;
    int_t                			memory[ 1 ];
};

/**
  * \brief Representing one large memory block, the size of the contained data is specified in RxfDimensions.h via define WST_LARGE_BUFFER_SIZE.
  * \req{RXF-743}
  */
struct WSTLargeMemoryBlock
{
    struct WSTLargeMemoryBlock* 	next;
    int_t							memory[ 1 ];
};

#endif	/* WST_SHOW_DIMENSION	*/

#endif /* of WST_MEM_H */

#endif /* WST_H */
