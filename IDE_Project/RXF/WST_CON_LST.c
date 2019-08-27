/**
* \ingroup container classes
* \class WST_CON_LST
* \brief Linked list handling for the Willert RXF.
*
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_CON_LST.c 30187 2014-09-29 14:13:44Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_CON_LST.c $
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

#ifdef WST_CON_LST_PRINTF
#include <stdio.h>					/* for printf, if it should be used */
#endif /* WST_CON_LST_PRINTF */


#define WST_CON_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */


#ifdef WST_CON_LST_PRINTF

void WST_CON_LST_selftest( void )
{
  WST_CON_LST*  myTestList = NULL;
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;
  int* intPtr = &c;
 
  myTestList = WST_CON_LST_Create();
  WST_CON_LST_addTail(myTestList, &a);
  WST_CON_LST_addTail(myTestList, &b);
  WST_CON_LST_addTail(myTestList, intPtr);
  WST_CON_LST_addTail(myTestList, &d);
   
  WST_CON_LST_print(myTestList);
 
  intPtr = (int*)WST_CON_LST_removeHead(myTestList);
  printf("Removed first element: %u, will add it at the end, and add 2 at beginning\n", *intPtr);
  WST_CON_LST_addTail(myTestList, intPtr);
  WST_CON_LST_addHead(myTestList, &b);
 
  WST_CON_LST_print(myTestList);

  intPtr = (int*)WST_CON_LST_getAt(myTestList, 0);
  printf("getAt(0) => %i\n", *intPtr);

  intPtr = (int*)WST_CON_LST_getAt(myTestList, 3);
  printf("getAt(3) => %i\n", *intPtr);

  intPtr = (int*)WST_CON_LST_getAt(myTestList, WST_CON_LST_getCount(myTestList)-1);
  printf("getAt(%i) => %i\n", WST_CON_LST_getCount(myTestList)-1, *intPtr);

  printf("Removing %i from list", d);
  WST_CON_LST_removeEntry( myTestList, &d );

  printf("List now contains %i elements.\n", WST_CON_LST_getCount(myTestList));
  WST_CON_LST_print(myTestList);

  printf("Trying to find index of %i: %i\n", b, WST_CON_LST_find( myTestList, &b ));
  printf("Trying to find index of %i: %i\n", d, WST_CON_LST_find( myTestList, &d ));
  printf("Trying to find index of %i: %i\n", a, WST_CON_LST_find( myTestList, &a ));
  

  printf("Remove all\n");
  WST_CON_LST_removeAll(myTestList);
  printf("List now contains %i elements.\n", WST_CON_LST_getCount(myTestList));
  WST_CON_LST_print(myTestList);

  WST_CON_LST_Destroy(myTestList);
}

#endif /* WST_CON_LST_PRINTF */


WST_CON_LST* WST_CON_LST_Create(void)
{
	WST_CON_LST* me = (WST_CON_LST*) malloc( 1 * sizeof(*me) );

	/* me != NULL check inside Init */
	WST_CON_LST_Init( me );

	return me;
}

void WST_CON_LST_Init( WST_CON_LST* const me )
{
	if( NULL == me )
	{
		WST_ERR_error( WST_ERR_ALLOC_FAILED );
	}
	else
	{
		me->head = NULL;
		me->tail = NULL;
		me->count= 0;
	}	
}

void WST_CON_LST_Cleanup( WST_CON_LST* const me )
{
	/* me != NULL check inside removeAll */
	WST_CON_LST_removeAll( me );
}

void WST_CON_LST_Destroy( WST_CON_LST* const me )
{
	if( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		WST_CON_LST_Cleanup( me );
		free( me );
	}
}

void WST_CON_LST_addTail(WST_CON_LST* const	me,	const WST_CON_LST_EntryType	data)
{
	WST_CON_LST_Entry* newListEntry = (WST_CON_LST_Entry*) malloc( 1 * sizeof(*newListEntry) );

	if( NULL == newListEntry )
	{
		WST_ERR_error( WST_ERR_ALLOC_FAILED );
	}
	else if( NULL == me )
	{
		free( newListEntry );
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		newListEntry->data	= data;
		newListEntry->next	= NULL;
	
		if( NULL == me->head && NULL == me->tail )
		{
			me->head = newListEntry;
			me->tail = newListEntry;
			me->count++;
		}
		else if( NULL	== me->head	|| NULL	== me->tail	)
		{
			free(newListEntry);
			WST_ERR_error( WST_ERR_CON_LST_INVALID );
		}
		else
		{
			/* List already contains elements - adding to tail. */
			me->tail->next = newListEntry;
			me->tail = newListEntry;
			me->count++;
		}
	}
}

void WST_CON_LST_addHead(WST_CON_LST* const	me,	const WST_CON_LST_EntryType	data)
{
	WST_CON_LST_Entry* newListEntry = (WST_CON_LST_Entry*) malloc( 1 * sizeof(*newListEntry) );

	if( NULL == newListEntry )
	{
		WST_ERR_error( WST_ERR_ALLOC_FAILED );
	}
	else if( NULL == me )
	{
		free( newListEntry );
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		newListEntry->data	= data;
		newListEntry->next	= NULL;
	
		if( NULL == me->head && NULL == me->tail )
		{
			me->head = newListEntry;
			me->tail = newListEntry;
			me->count++;
		}
		else if( NULL	== me->head	|| NULL	== me->tail	)
		{
			free(newListEntry);
			WST_ERR_error( WST_ERR_CON_LST_INVALID );
		}
		else
		{
			/* List already contains elements - adding to head. */
			newListEntry->next = me->head;
			me->head = newListEntry;
			me->count++;
		}
	}
}


WST_CON_LST_EntryType WST_CON_LST_removeHead( WST_CON_LST* const me )
{
	WST_CON_LST_Entry* head	   = NULL;
	WST_CON_LST_Entry* newHead = NULL;
	WST_CON_LST_EntryType data = (WST_CON_LST_EntryType) NULL;

	if( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else if( NULL == me->head && NULL == me->tail )
	{
		/* List is empty */
#ifdef WST_FORCE_ERR_CON_LST_EMPTY
		WST_ERR_error( WST_ERR_CON_LST_EMPTY );
#endif /* WST_FORCE_ERR_CON_LST_EMPTY */
	}
	else if( NULL == me->head || NULL == me->tail )
	{
		WST_ERR_error( WST_ERR_CON_LST_INVALID );
	}
	else
	{
		head	= me->head;
		newHead	= head->next;
		data	= head->data;
		
		me->head = newHead;
		me->count--;

		free(head);
		
		/* If the List is now empty, we also need to correct the tail pointer. */
		if( NULL == me->head )
		{
			me->tail = NULL;
		}
	}
	return data;
}
	
WSTBoolean WST_CON_LST_removeEntry( WST_CON_LST* const me, WST_CON_LST_EntryType data )
{
	WSTBoolean result = WSTFALSE;
	if( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else if( NULL == me->head && NULL == me->tail )
	{
		/* List is empty */
#ifdef WST_FORCE_ERR_CON_LST_EMPTY
		WST_ERR_error( WST_ERR_CON_LST_EMPTY );
#endif /* WST_FORCE_ERR_CON_LST_EMPTY */
	}
	else if( NULL == me->head || NULL == me->tail )
	{
		WST_ERR_error( WST_ERR_CON_LST_INVALID );
	}
	else
	{
		sint32 i;
		WST_CON_LST_Entry* entry = me->head;
		WST_CON_LST_Entry* prevEntry = NULL;

		for(i = 0; NULL != entry && i < me->count; i++ )
		{
			if( entry->data == data )
			{
				prevEntry->next = entry->next;

				/* If last element was removed we need to correct the tail pointer */
				if( prevEntry->next == NULL )
				{
					me->tail = prevEntry;
				}

				me->count--;
				free( entry );
				result = WSTTRUE;
				break;
			}

			prevEntry = entry;
			entry = entry->next;
		}
	}
	return result;
}
	
void WST_CON_LST_removeAll( WST_CON_LST* const me )
{
	if( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		while( NULL != me->head )
		{
			WST_CON_LST_removeHead(me);
		}
	}
}

WST_CON_LST_EntryType WST_CON_LST_getAt( WST_CON_LST* const	me, sint32 index )
{
	WST_CON_LST_Entry* entry = NULL;
	WST_CON_LST_EntryType data = NULL;	

	if( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else if( index >= me->count )
	{
		WST_ERR_error( WST_ERR_CON_INDEX_OUT_OF_BOUNDS );
	}
	else
	{
		sint32 i;
		entry = me->head;
		//data  = entry->data;

		for(i = 0; NULL != entry && i <= index; i++ )
		{
			data  = entry->data;
			entry = entry->next;
		}
	}
	return data;
}


sint32 WST_CON_LST_getCount( WST_CON_LST* const me )
{
	return me->count;
}


#ifdef WST_CON_LST_PRINTF

void WST_CON_LST_print( WST_CON_LST* me )
{
	if( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		sint32 i;
		WST_CON_LST_Entry* entry = NULL;
		sint32* intPtr = NULL; // interprete content as pointer to sint32

		entry = me->head;

		for(i = 0; NULL != entry && i < me->count; i++ )
		{
			intPtr = (sint32*) entry->data;
			printf("[%03u] %u\n", i, *intPtr);
			entry = entry->next;
		}
	}
}

#endif /* WST_CON_LST_PRINTF */


sint32 WST_CON_LST_find( WST_CON_LST* const me, const WST_CON_LST_EntryType data )
{
	sint32 foundAtIndex = -1;
	if( NULL == me )
	{
		WST_ERR_error( WST_ERR_EMPTY_ME_PTR );
	}
	else
	{
		sint32 i;
		WST_CON_LST_Entry* entry = me->head;

		for(i = 0; NULL != entry && i < me->count; i++ )
		{
			if( entry->data == data )
			{
				foundAtIndex = i;
				break;
			}

			entry = entry->next;
		}
	}
	return foundAtIndex;
}


#define WST_CON_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */
