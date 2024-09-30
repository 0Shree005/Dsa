#include <stdio.h>

#include "ll.h"

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

