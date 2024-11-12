#include "List.h"
#include <stddef.h>

List* List_init() {
    List* list = (List*) malloc(sizeof(List));
    list->capacity = 20;
    list->count = 0;
    list->array = (void**) malloc(sizeof(void*) * list->capacity);

    // init methods
    list->add = add;
    list->find = find;
    list->insert = insert;
    list->removeItem = removeItem;
    list->removeIndex = removeIndex;
    list->toArray = toArray;
    list->sort = sort;
}

void List_delete(List* list) {

}

void* removeIndex(List* list, int index) {

}
void* removeItem(List* list, void* item) {

}
void add(List* list, void* item) {
    (list->count)++;
    if(list->count > list->capacity) resizeList(list, list->capacity*2);
    list->array[list->count-1] = item;
}
void insert(List* list, int index, void* item) {

}
int find(List* list, void* item) {
    for(int i = 0; i < list->count; i++) {
        if(list->array[i] == item) return i;
    }
    return -1;
}
void* toArray(List*) {

}
void sort(List*, int (*sortFunction)(void*, void*)) {
    if(sortFunction == NULL) sortFunction = defaultSortFunction;

}

int defaultSortFunction(void* a, void* b) {
    if(a == b) return 0;
    return a > b ? 1 : -1;
}

void resizeList(List* list, int newCapacity) {

}
