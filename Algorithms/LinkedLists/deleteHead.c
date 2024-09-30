#include <stdlib.h>

#include "ll.h"

void deleteHead(node** head) {
	struct node* temp = *head;

	*head = ( *head )->next;

	free(temp);

}
