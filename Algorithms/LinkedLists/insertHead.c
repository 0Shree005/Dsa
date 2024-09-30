#include <stdio.h>
#include <stdlib.h>

#include "ll.h"

void insertHead(node** head, int value){

	node* n = malloc(sizeof(node));
	if (n == NULL) {
		printf("Memory Allocation Failed.\n");
		return;
	}

	n -> number = value;
	n -> next = (*head);

	*head = n;

}
