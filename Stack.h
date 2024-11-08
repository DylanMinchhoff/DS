#ifndef DSSTACK
#define DSSTACK

#ifndef STACKNODE
#define STACKNODE
    #define StackNode(type) struct StackNode##type\
    {\
        struct StackNode##type* next;\
        #type data;\
    };\
    

#endif

#define Stack(type) struct Stack{\
    struct StackNode(#type)* start;\
    void (*push)(struct Stack*, #type);\
    #type (*pop)(struct Stack*);\
    #type (*peek)(struct Stack*);\
    int (*count)(struct Stack*);\
    void (*clear)(struct Stack*);\
};\
void push(struct StackNode* stack, #type item) {\
    StackNode(#type)* newNode = malloc(sizeof(StackNode(#type)));\
    newNode->data = item;\
    newNode->next = NULL;\
    if(stack->start == NULL) {\
        statck->start == newNode;\
        return;\
    }\
    stack->start->next = newNode;\
    stack->start = stack->start->next;\
}\
#type pop(struct Stack* stack);\
#type peek(struct Stack* stack);\
int count(struct Stack* stack);\
void clear(struct Stack* stack);\

struct Stack* init_Stack();

#endif