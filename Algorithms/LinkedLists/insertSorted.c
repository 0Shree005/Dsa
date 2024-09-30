#include <stdio.h>
#include <stdlib.h>

#include "ll.h"

void insertSorted(node** head, int value){
	node* n = malloc(sizeof(node));
	if(n == NULL){
		printf("Memory Allocation Failed.\n");
		return;
	}

	n -> number = value;
	n -> next = NULL;

	if (*head == NULL || value < (*head) -> number)
	{
		n -> next = *head;
		*head = n;
	}

	else
	{
		node* ptr = *head;
		while(ptr -> next != NULL && ptr -> next -> number < value)
		{
			ptr = ptr -> next;
		}
		n -> next = ptr -> next;
		ptr -> next = n;
	}
}
