#include "istack.h"
#include <stdio.h> 
#include <stdlib.h>

/**
 * The above code defines functions for a stack data structure in C, including creating a stack,
 * pushing, popping, peeking, checking if empty, freeing the stack, printing the stack, and searching
 * for a value in the stack.
 * 
 * @return The code provided is an implementation of a stack data structure in C using dynamic memory
 * allocation. Here is a brief explanation of the functions in the code:
 */

/**
 * This function creates a stack data structure with an initial capacity of 2 integers.
 * 
 * @return The `IStack` structure is returned, initialized with a capacity of 2 and a size of 0. The
 * stack’s data array is dynamically allocated using `malloc` to store integers.
 */
IStack create_stack(void) {
    IStack stack;
    stack.data = malloc(2 * sizeof(int));
    stack.size = 0;
    stack.capacity = 2;
    return stack;
}

/**
 * The `spush` function increases the stack’s capacity and adds a new value to the top.
 * 
 * @param stack The `stack` parameter is a pointer to an `IStack` structure. This structure likely
 * contains information about the stack, such as its size, capacity, and data array.
 * @param value The `value` parameter represents the integer value to be pushed onto the top of the stack.
 * 
 * @return This function does not return any value. It directly modifies the stack.
 */
void spush(IStack *stack, int value) {
    if (stack->size == stack->capacity) {
        stack->capacity *= 2;
        stack->data = realloc(stack->data, stack->capacity * sizeof(int));
    }
    stack->data[stack->size] = value;
    stack->size++; 
}

/**
 * The `spop` function pops and returns the top element of the stack. If the stack is empty, it returns -1.
 * 
 * @param stack The `stack` parameter is a pointer to the stack.
 * 
 * @return The top element of the stack or `-1` if the stack is empty.
 */
int spop(IStack *stack) {
    if (stack->size == 0) {
        return -1;
    }
    stack->size--;
    return stack->data[stack->size];  
}

/**
 * The `speek` function returns the top element of the stack without removing it. If the stack is empty, it returns -1.
 * 
 * @param stack The `stack` parameter is a constant pointer to the stack.
 * 
 * @return The top element of the stack or `-1` if the stack is empty.
 */
int speek(const IStack *stack) {
    if (stack->size == 0) {
        return -1; 
    }
    return stack->data[stack->size - 1]; 
}

/**
 * The `sis_empty` function checks if the stack is empty by comparing its size to zero.
 * 
 * @param stack The `stack` parameter is a constant pointer to the stack.
 * 
 * @return The function returns `1` if the stack is empty, or `0` if it is not empty.
 */
int sis_empty(const IStack *stack) {
    return stack->size == 0;
}

/**
 * The `sfree_stack` function frees the memory allocated for the stack’s data and resets its size and capacity.
 * 
 * @param stack The `stack` parameter is a pointer to the stack structure.
 */
void sfree_stack(IStack *stack) {
    free(stack->data);  
    stack->data = NULL;
    stack->size = 0;
    stack->capacity = 0;
}

/**
 * The `sprint_stack` function prints the elements of the stack. If the stack is empty, it prints "Stack empty".
 * 
 * @param stack The `stack` parameter is a constant pointer to the stack.
 * 
 * @return This function does not return any value. It simply prints the contents of the stack to the console.
 */
void sprint_stack(const IStack *stack) {
    if (sis_empty(stack)) {
        printf("Stack empty\n");
        return;
    }

    printf("Stack: ");
    for (size_t i = 0; i < stack->size; i++) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

/**
 * The `ssearch` function searches for a specific value in the stack and returns its index if found.
 * If the value is not found, it returns -1.
 * 
 * @param stack The `stack` parameter is a pointer to the stack structure.
 * @param value The `value` parameter represents the integer to search for within the stack.
 * 
 * @return The function returns the index of the `value` in the stack's data array if found, or `-1` if not.
 */
int ssearch(const IStack *stack, int value) {
    for (size_t i = 0; i < stack->size; i++) {
        if (stack->data[i] == value) {
            return i;
        }
    }
    return -1;
}