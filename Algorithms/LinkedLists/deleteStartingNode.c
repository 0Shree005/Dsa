#include <stdio.h>
#include <stdlib.h>

#include "../../include/ll.h"

void deleteStartingNode(node** head) {
	struct node* temp = *head;

	*head = ( *head )->next;

	free(temp);

}
