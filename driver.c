#include "Stack.h"
#include <stddef.h>
#include <stdio.h>

int main(int argc, char** argv) {
    Stack* s = Stack_init();
    printf("StackCount %d\n", s->count);
    s->push(s, (void*)1);
    s->push(s, (void*)2);
    s->push(s, (void*)3);
    s->push(s, (void*)4);
    s->push(s, (void*)5);


    StackNode* c = s->start;
    while(c != NULL) {
        printf("%d\n", (int) c->data);
        c = c->next;
    }
    Stack_delete(s);
    return 0;
}