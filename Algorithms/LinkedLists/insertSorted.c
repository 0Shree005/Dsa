#include <stdio.h>
#include <stdlib.h>

#include "../../include/ll.h"

void insertSorted(node** head, int number){
	node* n = malloc(sizeof(node));
	if(n == NULL){
		printf("Memory Allocation Failed.\n");
		return;
	}

	n -> number = number;
	n -> next = NULL;

	if (*head == NULL || number < (*head) -> number)
	{
		n -> next = *head;
		*head = n;
	}

	else
	{
		node* ptr = *head;
		while(ptr -> next != NULL && ptr -> next -> number < number)
		{
			ptr = ptr -> next;
		}
		n -> next = ptr -> next;
		ptr -> next = n;
	}
}
