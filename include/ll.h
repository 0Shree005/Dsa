#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/*
 * Linked Lists
*/

typedef struct node
{
    int number;
    struct node* next;
} node;

void printLL(node* list);

#ifdef __cplusplus
    extern "C" {
    #endif

    void llOperations(node** list);
    void insertSorted(node** list, int number);

    #ifdef __cplusplus
}
#endif

#endif
