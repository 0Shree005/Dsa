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

void printLL(node* head);

#ifdef __cplusplus
    extern "C" {
    #endif

    void llOperations(node** head);
    void insertSorted(node** head, int number);
    void deleteStartingNode(node** head);

    #ifdef __cplusplus
}
#endif

#endif
