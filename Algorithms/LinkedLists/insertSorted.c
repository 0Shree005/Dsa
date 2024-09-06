#include <stdio.h>
#include <stdlib.h>

#include "../../include/ll.h"

void insertSorted(node** list, int number){
	node* n = malloc(sizeof(node));
	if(n == NULL){
		printf("Memory Allocation Failed.\n");
		return;
	}

	n -> number = number;
	n -> next = NULL;

	if (*list == NULL || number < (*list) -> number)
	{
		n -> next = *list;
		*list = n;
	}

	else
	{
		node* ptr = *list;
		while(ptr -> next != NULL && ptr -> next -> number < number)
		{
			ptr = ptr -> next;
		}
		n -> next = ptr -> next;
		ptr -> next = n;
	}
}
