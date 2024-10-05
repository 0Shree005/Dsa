#include <iostream>

#include "ll.h"

void printLL(node** head)
{
	const node* ptr = *head;

	while (ptr != nullptr)
	{
		std::cout<< ptr -> number << " -> ";
		ptr = ptr -> next;
	}

	std::cout << "NULL\n";
}
