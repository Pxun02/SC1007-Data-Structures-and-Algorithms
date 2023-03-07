#include <stdio.h>
#include <stdlib.h>

//HashMap
typedef struct _listnode{
    int key;
    struct _listnode* next;
} ListNode;

typedef struct _linkedlist{
    int size;
    ListNode* head;
} HashTableNode;

typedef struct _hashtable{
    int hSize;
    int nSize;
    HashTableNode* Table;
} HashTable;

int Hash(int key, int hSize){
    return key%hSize;
}

//graph
typedef struct __listnode{
    int vertex;
    struct __listnode* next;
} _ListNode;

union GraphForm{
    int** matrix;
    _ListNode** list;
};
enum GraphType{
    ADJ_MATRIX,
    ADJ_LIST
};

typedef struct _graph{
    int V;
    int E;
    enum GraphType type;
    union GraphForm adj;
} Graph;