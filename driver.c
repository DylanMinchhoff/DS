#include "Stack.h"
#include <stddef.h>
#include <stdio.h>

int main(int argc, char** argv) {
    Stack* s = Stack_init();
    printf("StackCount %d\n", s->count);
    s->pop(s);
    s->push(s, (void*)1);
    s->push(s, (void*)2);
    s->push(s, (void*)3);
    s->push(s, (void*)4);
    s->push(s, (void*)5);

    
    StackNode* c = s->start;
    while(s->count != 0) {
        printf("%d\n", (int*) s->pop(s));
        c = c->next;
    }
    Stack_delete(s);
    return 0;
}