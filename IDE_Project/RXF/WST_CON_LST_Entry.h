#ifdef WST_H

#ifndef WST_CON_LST_ENRTY_H
#define WST_CON_LST_ENTRY_H

/**
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_CON_LST_Entry.h 27670 2013-04-22 14:17:45Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST_CON_LST_Entry.h $
*
* This container element class is part of the implementation of the abstract data type of a list.
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


typedef void* WST_CON_LST_EntryType;

/******************************************************/
/**		WST_CON_LST_Entry structure definition		 **/
/******************************************************/
typedef struct WST_CON_LST_Entry_t
{
  WST_CON_LST_EntryType data;
  struct WST_CON_LST_Entry_t* next;
} WST_CON_LST_Entry;


#define WST_CON_LST_Entry_getNext( listElement )	listElement->next
#define WST_CON_LST_Entry_get( listElement )		listElement->data

#endif /* WST_CON_LST_ENRTY_H */

#endif /* WST_H */
