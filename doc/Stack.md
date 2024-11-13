# Stack

## Definitions:

```C
// StackNode for data
typedef struct StackNode {
    struct StackNode* next;
    void* data;
} StackNode;

// Stack struct
typedef struct Stack{
    struct StackNode* start;
    int count;
    void (*push)(struct Stack*, void*);
    void* (*pop)(struct Stack*);
    void* (*peek)(struct Stack*);
    void (*clear)(struct Stack*);
} Stack;

// Methods
void Stack_push(struct Stack* stack, void* item);
void* Stack_pop(struct Stack* stack);
void* Stack_peek(struct Stack* stack);
void Stack_clear(struct Stack* stack);

// constructors and destructors
struct Stack* Stack_init();
void Stack_delete(struct Stack*);
```

## Constructors:

### Stack_init()

Creates an empty stack

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

