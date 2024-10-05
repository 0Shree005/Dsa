#include <stdio.h>
#include <stdlib.h>

#include "ll.h"

void deleteHead(node** head) {
	if( *head == NULL) {
		printf("The list is empty!");
		return;
	}

	node* temp = *head;
	*head = ( *head )->next;
	free(temp);

}
