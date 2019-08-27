#ifdef WST_H

#ifndef WST_CON_LST_H
#define WST_CON_LST_H

/**
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_CON_LST.h 27670 2013-04-22 14:17:45Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_CON_LST.h $
*
* This container class implements the abstract data type of a list.
* It can hold void pointers.
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

/* List entries are handled via the WST_CON_LST_Entry class. */
#include "WST_CON_LST_Entry.h"


/******************************************************/
/**			WST_CON_LST structure definition		 **/
/******************************************************/
typedef struct WST_CON_LST_t
{
  WST_CON_LST_Entry*	head;
  WST_CON_LST_Entry*	tail;
  sint32				count;
} WST_CON_LST;


#define WST_CON_LST_getHead( me )		WST_CON_LST_getAt( me, 0 )


#define WST_CON_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


/** Creates an empty list. */
WST_CON_LST*			WST_CON_LST_Create(void);

/** Initializes a list. */
void					WST_CON_LST_Init( WST_CON_LST* const me );

/** Deletes all contained items of the list. */
void					WST_CON_LST_Cleanup( WST_CON_LST* const me );

/** Deletes all contained items and destroys the list. */
void					WST_CON_LST_Destroy( WST_CON_LST* const me );

/** Appends an item to to the end of the list. */
void					WST_CON_LST_addTail( WST_CON_LST* const me, const WST_CON_LST_EntryType data );

/** Inserts a new item as the head of the list. 
  * Also referred as push element to list.		*/
void					WST_CON_LST_addHead( WST_CON_LST* const	me,	const WST_CON_LST_EntryType	data );

/** Removes the given element from the list.
  * Returns WSTTRUE, if the element was found and could be removed. */
WSTBoolean				WST_CON_LST_removeEntry( WST_CON_LST* const me, WST_CON_LST_EntryType data );

/** Removes the head item of the list, and returns it.
  * Also referred as pop element from list.				*/
WST_CON_LST_EntryType	WST_CON_LST_removeHead( WST_CON_LST* const me );

/** Removes all elements of the list. */
void					WST_CON_LST_removeAll( WST_CON_LST* const me );

/** Returns the item with the specified index from the list.
  */
WST_CON_LST_EntryType	WST_CON_LST_getAt( WST_CON_LST* const	me, sint32 index );

/** Returns the number of items contained in the list. */
sint32					WST_CON_LST_getCount( WST_CON_LST* const me );

/** Checks, if the given element is contained in the list.
  * If it is found, it returns it's index, otherwise it returns -1. */
sint32					WST_CON_LST_find( WST_CON_LST* const me, const WST_CON_LST_EntryType data );

#ifdef WST_CON_LST_PRINTF
void					WST_CON_LST_print( WST_CON_LST* me );
void					WST_CON_LST_selftest( void );
#endif /* WST_CON_LST_PRINTF */


#define WST_CON_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif /* of WST_CON_LST_H */

#endif /* WST_H */
