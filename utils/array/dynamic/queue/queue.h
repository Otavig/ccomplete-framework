#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* create_queue();
int is_empty(Queue* q);
void enqueue(Queue* q, int value);
int dequeue(Queue* q);
void free_queue(Queue* q);
void print_queue(Queue* q);

#endif
