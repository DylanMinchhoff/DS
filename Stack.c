#include "Stack.h"
#include "Error.h"
#include <stddef.h>

Stack* Stack_init() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->start = NULL;
    stack->push = Stack_push;
    stack->pop = Stack_pop;
    stack->peek = Stack_peek;
    stack->count = 0;

    return stack;
}

void Stack_push(Stack* stack, void* item) {
    StackNode* newNode =  (StackNode*) malloc(sizeof(StackNode));
    newNode->data = item;
    newNode->next = NULL;
    (stack->count)++;
    if(stack->start == NULL) {
        stack->start = newNode;
        return;
    }
    newNode->next = stack->start;
    stack->start = newNode;
    return;
};

void* Stack_pop(Stack* stack) {
    if(stack->start == NULL) return NULL;
    StackNode* top = stack->start;
    stack->start = stack->start->next;
    void* data = top->data;
    (stack->count)--;
    free(top);
    return data;
}

void Stack_clear(Stack* stack) {
    StackNode* c = stack->start;
    while (c != NULL)
    {
        StackNode* tmp = c->next;
        free(c);
        c = tmp;
    }
    stack->count = 0;
}

void* Stack_peek(Stack* stack) {
    return stack->start->data;
}

void Stack_delete(Stack* stack) {
    StackNode* c = stack->start;
    Stack_clear(stack);
    free(stack);
    return;
}