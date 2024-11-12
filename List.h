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
void sort(List* list, int (*sortFunction)(void*, void*));

int defaultSortFunction(void*, void*);
void resizeList(List* list, int);

List* List_init();
void List_delete(List* list);
#endif