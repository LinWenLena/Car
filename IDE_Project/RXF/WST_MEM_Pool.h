#ifdef WST_H

#ifndef WSTMEMORYPOOL_H
#define WSTMEMORYPOOL_H

/**
* \brief Memory pool containing blocks of a specific size for static memory handling.
*
* This class initially creates a fixed number of memory blocks all of which are linked together
* onto the free list. As memory is requested, a block is taken from the free list and
* when it is returned it is added back to the free list. If the free list is empty,
* then another memory block is dynamically allocated. The operation usage can be called to see
* how many times each pool has been used and also get the maximum number of memory blocks that
* the pool contains.
*
* Willert Software Tools - Realtime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_MEM_Pool.h 30194 2014-09-30 12:18:33Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_MEM_Pool.h $
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


struct WST_MEM_Pool_t
{
    /** 
      * \brief Fixed block size for this memory pool.
      * \req{RXF-732}
      */
    uint16		 			 blockSize;

	/** 
      * \brief Pointer to a WSTMemoryBlock, which is the first element of a linked list of available memory blocks.
      * \req{RXF-733}
      */
    struct WSTMemoryBlock	*freeList;		
    
    /** 
      * \brief Number of memory blocks which are managed via this memory pool.
      * \req{RXF-734}
      */
    uint16		 			 maxBlocks;
    
    /** 
      * \brief Number of memory blocks which are currently in use.
      * \req{RXF-735}
      */
    uint16		 			use;
    

};


#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/** 
  * \brief Reserves a pointer for a free memory block from this pool.
  * \req{RXF-746}
  */
void*	WST_MEM_Pool_getMemory(WST_MEM_Pool* const me);

/** 
  * \brief Returns memory to the memory pool to be freely used again.
  * \req{RXF-747}
  */
void	WST_MEM_Pool_returnMemory( WST_MEM_Pool* const me, FREE_ARGUMENT_TYPE memory );

/** 
  * \brief Initializes the memory pool object.
  * \req{RXF-748}
  */
void	WST_MEM_Pool_init( WST_MEM_Pool* const me, uint16 initialNumber, uint16 structSize, void *memory );

/** 
  * \brief Cleans up memory pool class.
  * \req{RXF-749}
  */
void	WST_MEM_Pool_Cleanup(WST_MEM_Pool* const me);


#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif /* of WSTMEMORYPOOL_H */

#endif /* WST_H */
