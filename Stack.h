#ifndef DSSTACK
#define DSSTACK


typedef struct StackNode {
    struct StackNode* next;
    void* data;
};

typedef struct Stack{
    struct StackNode* start;
    void (*push)(struct Stack*, void*);
    void* (*pop)(struct Stack*);
    void* (*peek)(struct Stack*);
    int (*count)(struct Stack*);
    void (*clear)(struct Stack*);
} Stack;
void push(struct StackNode* stack, void* item);
void* pop(struct Stack* stack);
void* peek(struct Stack* stack);
int count(struct Stack* stack);
void clear(struct Stack* stack);

struct Stack* init_Stack();

#endif