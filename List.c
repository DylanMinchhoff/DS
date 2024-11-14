#include "List.h"
#include "CompareFunctions.h"
#include <stddef.h>

List* List_init() {
    List* list = (List*) malloc(sizeof(List));
    list->capacity = ARRAYLIST_INITIALSIZE;
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
    for(int i = 0; i < list->capacity; i++) {
        free(list->array[i]);
    }
}

void* removeIndex(List* list, int index) {
    if(list->count <= index || list->count == 0) return NULL;
    void* ptr = list->array[index];
    for(int i = index; i < list->count + 1; i++) list->array[i] = list->array[i + 1];
    (list->count)--;
    return ptr;
}
void* removeItem(List* list, void* item) {
    // comparing items to find index
    for(int i = 0; i < list->count; i++) {
        if(defaultCompareFunction(list->array[i], item) == 0) return removeIndex(list, i);
    }
    return NULL;
}
void add(List* list, void* item) {
    if(list->count > list->capacity) resizeList(list, list->capacity * ARRAYLIST_INCREASE);
    list->array[list->count] = item;
    (list->count)++;
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
    if(sortFunction == NULL) sortFunction = defaultCompareFunction;
    
}

void resizeList(List* list, int newCapacity) {

}
