#include "Stack.h"
#include "Error.h"
#include <stddef.h>

Stack* Stack_init() {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->start = NULL;
    stack->push = Stack_push;
    stack->pop = Stack_pop;
    stack->peek = Stack_peek;
    stack->count = 0;

    return stack;
}

void Stack_push(struct Stack* stack, void* item) {
    struct StackNode* newNode =  (struct StackNode*) malloc(sizeof(struct StackNode));
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

void* Stack_pop(struct Stack* stack) {
    if(stack->start == NULL) {
        ThrowError("Cannot pop from empty stack");
    }
    struct StackNode* top = stack->start;
    stack->start = stack->start->next;
    void* data = top->data;
    (stack->count)--;
    free(top);
    return data;
}

void* Stack_peek(struct Stack* stack) {
    return stack->start->data;
}

void Stack_delete(struct Stack* stack) {
    StackNode* c = stack->start;
    while (c != NULL)
    {
        StackNode* tmp = c->next;
        free(c);
        c = tmp;
    }
    free(stack);
    return;
}