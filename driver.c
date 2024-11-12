#include "Stack.h"
#include "List.h"
#include <stddef.h>
#include <stdio.h>

int main(int argc, char** argv) {
    Stack* s = Stack_init();
    printf("StackCount %d\n", s->count);
    // s->pop(s);
    s->push(s, (void*)14823);
    s->push(s, (void*)2);
    s->push(s, (void*)462);
    s->push(s, (void*)320);
    s->push(s, (void*)90);


    StackNode* c = s->start;
    while(s->count != 0) {
        printf("item> %d: stack count> %d\n", (int*) s->pop(s), s->count);
        c = c->next;
    }
    printf("StackCount %d\n", s->count);

    Stack_delete(s);
    return 0;
}