#include "Stack.h"
#include "List.h"
#include "CompareFunctions.h"
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>

void StackTest() {
    Stack* s = Stack_init();
    printf("StackCount %d\n", s->count);
    // s->pop(s);
    s->push(s, (void*)14823);
    s->push(s, (void*)2);
    s->push(s, (void*)462);
    s->push(s, (void*)320);
    s->push(s, (void*)90);

    while(s->count != 0) {
        printf("item> %d: stack count> %d\n", *(int*) s->pop(s), s->count);
    }
    printf("StackCount %d\n", s->count);

    Stack_delete(s);
}

int main(int argc, char** argv) {
    
    return 0;
}