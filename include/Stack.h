/**
 * \file Stack.h
 * \author Orion Serup (orionserup@gmail.com)
 * \brief 
 * \version 0.1
 * \date 2022-02-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "List.h"
#include <stdbool.h>

/// A Stack is Just a List With Special Functions
typedef List Stack;

/**
 * \brief Checks if a Stack is Empty
 * 
 * \param stack Stack to Check
 * \return true If the Stack Has No Elements
 * \return false If the Stack Has Elements
 */
bool IsEmpty(const Stack* const stack);

/**
 * \brief 
 * 
 * \param stack
 * \param data
 */
void Push(Stack* const stack, const Data data);

/**
 * \brief 
 * 
 * \param stack
 */
void Pop(Stack* const stack);

/**
 * \brief 
 * 
 * \param stack
 * \return Data 
 */
Data Peek(const Stack* const stack);

/**
 * \brief Get the Size of the Stack
 * 
 * \param stack
 * \return size_t 
 */
size_t GetSize(const Stack* const stack);

#define FPrintStack(file, stack) FPrintList(file, stack)
#define PrintStack(stack) FPrintStack(stdout, stack)
