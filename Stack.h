#ifndef DSSTACK
#define DSSTACK

typedef struct StackNode {
    struct StackNode* next;
    void* data;
} StackNode;

typedef struct Stack{
    struct StackNode* start;
    int count;
    void (*push)(struct Stack*, void*);
    void* (*pop)(struct Stack*);
    void* (*peek)(struct Stack*);
    void (*clear)(struct Stack*);
} Stack;
void Stack_push(struct Stack* stack, void* item);
void* Stack_pop(struct Stack* stack);
void* Stack_peek(struct Stack* stack);
void Stack_clear(struct Stack* stack);

struct Stack* Stack_init();
void Stack_delete(struct Stack*);


#endif