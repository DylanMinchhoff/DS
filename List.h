#ifndef LIST
#define LIST

#define ARRAYLIST_INITIALSIZE 20
#define ARRAYLIST_INCREASE 2
#define ARRAYLIST_DECREASE 0.5

typedef struct List {
    void** array;
    int count;
    int capacity;
    void* (*removeIndex)(struct List*, int);
    void* (*removeItem)(struct List*, void*);
    void (*add)(struct List*, void*);
    void (*insert)(struct List*, int, void*);
    int (*find)(struct List*, void*);
    void* (*toArray)(struct List*);
    void (*sort)(struct List*);
}List;

void* removeIndex(List* list, int index);
void* removeItem(List* list, void* item);
void add(List* list, void*);
void insert(List* list, int, void*);
int find(List* list, void*);
void* toArray(List* list);

/**
 * @param list list to be sorted
 * @param sortFunction the function the list will be sorted on,
 * if sortFunction == NULL the function will use the defaultSortFunction
 */
void sort(List* list, int (*sortFunction)(void*, void*));

void resizeList(List* list, int);

List* List_init();
void List_delete(List* list);
#endif