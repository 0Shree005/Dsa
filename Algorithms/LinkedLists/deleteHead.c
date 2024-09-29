#include <stdlib.h>

#include "../../include/ll.h"

void deleteHead(node** head) {
	struct node* temp = *head;

	*head = ( *head )->next;

	free(temp);

}
