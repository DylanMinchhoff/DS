#include "Stack.h"
#include <stddef.h>

Stack* init_Stack() {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->start = NULL;
    stack->push = push;

}

Stack* init_Stack(void* inital_val) {
    struct Stack* stack = init_Stack();
    stack->push(stack, inital_val);
    return stack;
}

void push(struct Stack* stack, void* item) {
    struct StackNode* newNode =  (struct StackNode*) malloc(sizeof(struct StackNode));
    newNode->data = item;
    newNode->next = NULL;
    if(stack->start == NULL) {
        stack->start == newNode;
        return;
    }
    stack->start->next = newNode;
    stack->start = stack->start->next;
};