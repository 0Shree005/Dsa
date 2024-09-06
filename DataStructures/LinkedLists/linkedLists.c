#include <stdio.h>
#include <stdlib.h>

#include "../../include/ll.h"
#include "../../include/algorithms.h"

void createLL(node** list);

void linkedLists()
{
	node* list = NULL;

	createLL(&list);

	llOperations(&list);
}

void createLL(node** list)
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
		insertSorted(list, num);
	}
}
