/**
 * \file List.c
 * \author Orion Serup (orionserup@gmail.com)
 * \brief 
 * \version 0.1
 * \date 2022-02-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "List.h"
#include <stdint.h>

Node* CreateNode(const Data data, const Node* const next) {

    Node* output = malloc(sizeof(Node));
    output->data = data;
    output->next = (Node*)next;

    return output;

}

void DeleteNode(Node* const node) {

    Assert(node, "Invalid Node in Delete Node");
    free(node);

}

Data GetData(const Node* const node) {

    Assert(node, "Invalid Node in Get Data");

    return node->data;

}

void SetData(Node* const node, const Data data) {

    Assert(node, "Invalid Node in Set Node Data");

    node->data = data;

}

Node* GetNext(const Node* const node) {

    Assert(node, "Invalid Node in Get Node Next");

    return node->next;

}

void SetNext(Node* const node, const Node* const next) {

    Assert(node, "Invalid Node in Set Node Next");

    node->next = (Node*)next;

}

Node* PushFront(List* const list, const Data data) {

    Assert(list, "Invalid List in Push Front");

    list->head = CreateNode(data, list->head);
    list->size++;

    return list->head;

}

void PopFront(List* const list) {

    Assert(list, "Invalid List In Pop Front");

    if(list->size == 0) return;

    Node* head = list->head;
    list->head = head->next;
    list->size--;

    DeleteNode(head);

}

void FPrintList(FILE* const file, const List* const list) {

    Assert(list, "Invalid List in Print List");

    for(Node* node = list->head; node->next; node = node->next) 
        fprintf(file, "%li->" , (int64_t)node->data);

    fputs("NULL\n", file);

}
