#ifndef _WST_COLLECTION_H
#define _WST_COLLECITON_H

#include "WST_Types.h"
#include "WST.h"

/**
 * some WSTObject definitions for the collection
 **/
typedef unsigned int index_t;

/**
 * init and cleanup functions for the collection
 */
struct WSTCollection_t* WSTCollection_New(void);
WSTBoolean WSTCollection_Init(struct WSTCollection_t* const me);
void WSTCollection_Destructor(struct WSTCollection_t* const me);
void WSTCollection_Cleanup(struct WSTCollection_t* const me);

/**
 * functions to access and change collection content
 */
WSTObject WSTCollection_getFirstElement(const struct WSTCollection_t* const me);
WSTObject WSTCollection_getLastElement(const struct WSTCollection_t* const me);
WSTObject WSTCollection_getElementAtPosition(const struct WSTCollection_t* const me, index_t index);
WSTBoolean WSTCollection_setElementAtPosition(struct WSTCollection_t* const me, index_t index, WSTObject element);
WSTBoolean WSTCollection_addElement(struct WSTCollection_t* const me, WSTObject element);
WSTBoolean WSTCollection_removeElement(struct WSTCollection_t* const me, WSTObject element);
WSTBoolean WSTCollection_removeElementAtPosition(struct WSTCollection_t* const me, index_t index);
WSTBoolean WSTCollection_contains(const struct WSTCollection_t* const me, WSTObject element);
void WSTCollection_clear(struct WSTCollection_t* const me);
index_t WSTCollection_getSize(const struct WSTCollection_t* const me);

#endif /*_WST_COLLECTION_H*/
