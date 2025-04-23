#ifndef ISTACK_H
#define ISTACK_H

#include <stddef.h> 

typedef struct {
    int *data; 
    size_t size; 
    size_t capacity;
} IStack;

IStack create_stack(void);  
void spush(IStack *stack, int value); 
int spop(IStack *stack); 
int speek(const IStack *stack); 
int sis_empty(const IStack *stack); 
void sfree_stack(IStack *stack);  
void sprint_stack(const IStack *stack);
int ssearch(const IStack *stack, int value);
int sget_at_index(const IStack *stack, size_t index);

#endif
