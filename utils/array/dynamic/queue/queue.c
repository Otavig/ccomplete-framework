#include "queue.h"

Queue* create_queue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    if (!q) {
        printf("Erro ao alocar memória para a fila.\n");
        exit(1);
    }
    q->front = NULL;
    q->rear = NULL;
    return q;
}

int is_empty(Queue* q) {
    return q->front == NULL;
}

void enqueue(Queue* q, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) {
        printf("Erro ao alocar memória para o nó.\n");
        exit(1);
    }
    new_node->data = value;
    new_node->next = NULL;

    if (is_empty(q)) {
        q->front = new_node;
    } else {
        q->rear->next = new_node;
    }

    q->rear = new_node;
}

int dequeue(Queue* q) {
    if (is_empty(q)) {
        printf("Fila vazia. Não é possível remover.\n");
        return -1;
    }

    Node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
    return data;
}

void print_queue(Queue* q) {
    Node* current = q->front;
    printf("Fila: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void free_queue(Queue* q) {
    while (!is_empty(q)) {
        dequeue(q);
    }
    free(q);
}
