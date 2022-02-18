/**
 * \file List.h
 * \author Orion Serup (orionserup@gmail.com)
 * \brief 
 * \version 0.1
 * \date 2022-02-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include "Utils.h"

#ifndef LIST_DATATYPE
typedef int Data;
#else 
typedef LIST_DATATYPE Data;
#endif

/// Nodes for Lists, Stacks and Queues
typedef struct node {

    Data data;          ///< The Data to Store in the Node
    struct node* next;  ///< A pointer to the next Node in the List

} Node;

/// Linked List
typedef struct {

    Node* head;  ///< The Front of the Lists
    Node* tail;  ///< The End of the List
    size_t size; ///< How Many Elements in the List

} List;

/**
 * \brief Get the Node Data object
 * 
 * \param node
 * \return Data 
 */
inline Data GetData(const Node* const node);

/**
 * \brief Set the Data object
 * 
 * \param node
 * \param data
 */
inline void SetData(Node* const node, const Data data);

/**
 * \brief Get the Next object
 * 
 * \param node
 * \return Node* 
 */
inline Node* GetNext(const Node* const node);

/**
 * \brief Create a Node object
 * 
 * \param data
 * \param next
 * \return Node* 
 */
inline Node* CreateNode(const Data data, const Node* const next);

/**
 * \brief 
 * 
 * \param node
 */
inline void DeleteNode(Node* const node);

/**
 * \brief 
 * 
 * \param list
 * \param node
 */
Node* Insert(List* const list, const Data data, const size_t place);

/**
 * \brief 
 * 
 * \param list
 * \param node
 */
Node* PushBack(List* const list, const Data);

/**
 * \brief 
 * 
 * \param list
 * \param node
 */
Node* PushFront(List* const list, const Data data);

/**
 * \brief 
 * 
 * \param list
 */
void PopBack(List* const list);

/**
 * \brief 
 * 
 * \param list
 */
void PopFront(List* const list);

/**
 * \brief 
 * 
 * \param list
 * \param place
 */
void DeleteFrom(List* const list, const size_t place);

/**
 * \brief 
 * 
 * \param list
 */
void FPrintList(FILE* const file, const List* const list);

#define PrintList(list) FPrintList(stdout, list)




