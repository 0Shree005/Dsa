#include <stdio.h>
#include <stdlib.h>

#include "../../include/ll.h"
#include "../../include/algorithms.h"

void createLL(node** head);

void linkedLists()
{
	node* head = NULL;

	createLL(&head);

	llOperations(&head);
}

void createLL(node** head)
{
	int num;
	printf("Enter values for the Linked List (enter -1 to stop): ");
	while(1)
	{
		scanf("%d", &num);
		if (num == -1)
		{
			break;
		}
		insertSorted(head, num);
	}
}
