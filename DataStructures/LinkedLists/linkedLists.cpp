#include <iostream>

#include "../../include/ll.h"

void createLL(node** head);

void linkedLists()
{
	node* head = NULL;

	createLL(&head);

	llOperations(&head);
}
