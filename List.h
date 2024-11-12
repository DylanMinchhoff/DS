#ifndef LIST
#define LIST

typedef struct List {
    void** array;
    int count;
    int capacity;
    void* (*remove)(List*, int);
    void (*add)(List*, void*);
    void (*insert)(List*, int, void*);
    int (*find)(List*, void*);
    void* (*toArray)(List*);
    void (*sort)(List*);
} List;

void* removeIndex(List* list, int index);
void* removeItem(List* list, void* item);
void add(List*, void*);
void insert(List*, int, void*);
int find(List*, void*);
void* toArray(List*);
void sort(List*, int (*sortFunction)(void*, void*));


#endif