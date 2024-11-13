# Stack

## Definitions:

```C
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
```

## Constructors:

### Stack_init()


## Destructors:

### Stack_delete()

## Methods:

### push
- pushes an item to the stack

### pop
- removes the top item of the stack
- if the stack is empty, the stack will return NULL

### peek
- returns the top element in the stack without popping the element

### clear
- clears the current stack

## Properties:

### count
- the amount of items in the stack

