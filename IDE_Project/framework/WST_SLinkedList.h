#ifndef _WST_S_LINKED_LIST_H
#define _WST_S_LINKED_LIST_H

#include "WST_Collection.h"

/**
 * struct for single linked list node
 */
typedef struct WSTSLinkedListNode_t {
	struct WSTSLinkedListNode_t* next;
	WSTObject item;
} WSTSLinkedListNode;

/**
 * init and cleanup functions for the linked list nodes
 */
WSTSLinkedListNode* WSTSLinkedListNode_New(void);
WSTBoolean WSTSLinkedListNode_Init(WSTSLinkedListNode* me);
void WSTSLinkedListNode_Destroy(WSTSLinkedListNode* me);
void WSTSLinkedListNode_Cleanup(WSTSLinkedListNode* me);

/**
 * struct definition for the collection (single linked list implementation)
 */
typedef struct WSTCollection_t {
	WSTSLinkedListNode* first;
	WSTSLinkedListNode* last;
	index_t count;
} WSTSLinkedList;

#endif /* _WST_S_LINKED_LIST_H */
