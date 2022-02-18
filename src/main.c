/**
 * \file main.c
 * \author Orion Serup (orionserup@gmail.com)
 * \brief 
 * \version 0.1
 * \date 2022-02-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Stack.h"

int main() {

    List list = {0};
    Stack stack = {0};

    PushFront(&list, 10);
    PushFront(&list, 15);
    PushFront(&list, 25);

    PrintList(&list);

    PopFront(&list);

    PrintList(&list);

    Push(&stack, 1);
    Push(&stack, 2);
    Push(&stack, 3);

    PrintStack(&stack);

    Pop(&stack);

    PrintStack(&stack);

}