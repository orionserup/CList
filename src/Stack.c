/**
 * \file Stack.c
 * \author Orion Serup (orionserup@gmail.com)
 * \brief 
 * \version 0.1
 * \date 2022-02-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Stack.h"


bool IsEmpty(const Stack* const stack) { 

    Assert(stack, "Invalid Stack in IsEmpty");
    return stack->size == 0; 

}

void Push(Stack* const stack, const Data data) { 
    
    Assert(stack,"Invalid Stack in Push");
    PushFront(stack, data); 
    
}

void Pop(Stack* const stack) { 
    
    Assert(stack, "Invalid Stack in Pop");
    PopFront(stack); 
    
}

Data Peek(const Stack* const stack) { 
    
    Assert(stack, "Invalid Stack in Peek");
    return IsEmpty(stack)? 0: stack->tail->data;
    
}

size_t GetSize(const Stack* const stack) { 
    
    Assert(stack, "Invalid Stack in Get Size");
    return stack->size; 
    
}
