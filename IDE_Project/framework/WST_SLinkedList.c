#ifndef _WST_S_LINKED_LIST_C
#define _WST_S_LINKED_LIST_C
#include <stdlib.h>

#include "WST_SLinkedList.h"

/**
 * init and cleanup for list nodes
 */
WSTSLinkedListNode* WSTSLinkedListNode_New(void) {
	WSTSLinkedListNode* me = (WSTSLinkedListNode*) malloc(sizeof(WSTSLinkedListNode));
	if (NULL != me) {
		WSTSLinkedListNode_Init(me);
	}
	return me;
}
WSTBoolean WSTSLinkedListNode_Init(WSTSLinkedListNode* me) {
	WSTBoolean result = FALSE;
	if (NULL != me) {
		me->next = NULL;
		me->item = NULL;
		result = TRUE;
	}
	return result;
}
void WSTSLinkedListNode_Destroy(WSTSLinkedListNode* me) {
	if (NULL != me) {
		WSTSLinkedListNode_Cleanup(me);
		free(me);
	}
}
void WSTSLinkedListNode_Cleanup(WSTSLinkedListNode* me) {
	me->next = NULL;
	me->item = NULL;
}

/**
 * init and cleanup functions for the collection
 */
WSTSLinkedList* WSTCollection_New(void) {
	WSTSLinkedList* me = (WSTSLinkedList*) malloc(sizeof(WSTSLinkedList));
	if (NULL != me) {
		WSTCollection_Init(me);
	}
	return me;
}

WSTBoolean WSTCollection_Init(WSTSLinkedList* const me) {
	WSTBoolean result = FALSE;
	if (NULL != me) {
		me->first = NULL;
		me->last = NULL;
		me->count = 0;
		result = TRUE;
	}
	return result;
}

void WSTCollection_Destructor(WSTSLinkedList* const me) {
	if (NULL != me) {
		WSTCollection_Cleanup(me);
		free(me);
	}
}
void WSTCollection_Cleanup(WSTSLinkedList* const me) {
	if (NULL != me) {
		WSTCollection_clear(me);
	}
}

/**
 * functions to manage collection content
 */
WSTObject WSTCollection_getFirstElement(const WSTSLinkedList* const me) {
	if (NULL == me->first) {
		return NULL;
	}
	return me->first->item;
}
WSTObject WSTCollection_getLastElement(const WSTSLinkedList* const me) {
	if (NULL == me->last) {
		return NULL;
	}
	return me->last->item;
}
WSTObject WSTCollection_getElementAtPosition(
		const WSTSLinkedList* const me,
		index_t index) {
	int i;
	WSTSLinkedListNode* item;

	if(index >= me->count) {
		return NULL;
	}

	item = me->first;
	for(i = 0; i < index; ++i) {
		item = item->next;
	}
	return item->item;
}
WSTBoolean WSTCollection_setElementAtPosition(
		WSTSLinkedList* const me,
		index_t index,
		WSTObject element) {
	int i;
	WSTSLinkedListNode* item;

	if(index >= me->count) {
		return FALSE;
	}

	item = me->first;
	for(i = 0; i < index; ++i) {
		item = item->next;
	}
	item->item = element;
	return TRUE;
}
WSTBoolean WSTCollection_addElement(WSTSLinkedList* const me, WSTObject element) {
	WSTSLinkedListNode* node = WSTSLinkedListNode_New();
	node->item = element;

	if (NULL != me->last) {
		me->last->next = node;
	} else {
		me->first = node;
	}
	me->last = node;
	++(me->count);
	return TRUE;
}
static void removeNode(WSTSLinkedList* me, WSTSLinkedListNode* last, WSTSLinkedListNode* node) {
	if (node == me->last) {
		me->last = last;
	}
	if (node == me->first) {
		me->first = node->next;
	} else {
		last->next = node->next;
	}
	WSTSLinkedListNode_Destroy(node);
	--(me->count);
}
WSTBoolean WSTCollection_removeElement(WSTSLinkedList* const me, WSTObject element) {
	WSTSLinkedListNode* node = me->first;
	WSTSLinkedListNode* last = NULL;

	while (NULL != node) {
		if (node->item == element) {
			removeNode(me, last, node);
			return TRUE;
		}
		last = node;
		node = node->next;
	}
	return FALSE;
}
WSTBoolean WSTCollection_removeElementAtPosition(
		WSTSLinkedList* const me,
		index_t index) {
	int i;
	WSTSLinkedListNode* node, *last;

	if (index >= me->count) {
		return FALSE;
	}

	node = me->first;
	for (i = 0; i < me->count; i++) {
		last = node;
		node = node->next;
	}
	removeNode(me, last, node);
	return TRUE;
}
WSTBoolean WSTCollection_contains(const WSTSLinkedList* const me, WSTObject element) {
	WSTSLinkedListNode* node = me->first;
	while(NULL != node) {
		if (node->item == element) {
			return TRUE;
		}
		node = node->next;
	}
	return FALSE;
}
void WSTCollection_clear(WSTSLinkedList* const me) {
	WSTSLinkedListNode* tmp;
	if (NULL != me) {
		while (me->first != NULL) {
			tmp = me->first;
			me->first = me->first->next;
			WSTSLinkedListNode_Destroy(tmp);
			--(me->count);
		}
		me->last = NULL;
	}
}
index_t WSTCollection_getSize(const WSTSLinkedList* const me) {
	return me->count;
}
#endif /* _WST_S_LINKED_LIST_C */
