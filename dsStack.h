#ifndef DSSTACK
#define DSSTACK

#define Stack(type) struct Stack##type

struct Stack {
    struct Stack* next;
    void (*push)(struct Stack*, void*);
    void* (*pop)(struct Stack*);
    void* (*peek)(struct Stack);
    int (*count)(struct Stack*);
    void (*clear)(struct Stack*);
};
void push(struct Stack* stack, void* item);
void* pop(struct Stack* stack);
void* peek(struct Stack* stack);
int count(struct Stack* stack);
void clear(struct Stack* stack);

struct Stack* init_Stack();

#endif