#ifndef LIST
#define LIST

typedef struct List {
    void** array;
    int count;
    int capacity;
    void* (*removeIndex)(List*, int);
    void* (*removeItem)(List*, void*);
    void (*add)(List*, void*);
    void (*insert)(List*, int, void*);
    int (*find)(List*, void*);
    void* (*toArray)(List*);
    void (*sort)(List*);
} List;

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

/**
 * @param a item compared
 * @param b item compared to a
 * will return 1,0,-1
 * @return 1   (a > b)
 * @return 0   (a = b)
 * @return -1  (a < b)
 */
int defaultSortFunction(void* a, void* b);

void resizeList(List* list, int);

List* List_init();
void List_delete(List* list);
#endif