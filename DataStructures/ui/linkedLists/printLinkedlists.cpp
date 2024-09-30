#include <iostream>

#include "../../../include/ll.h"

void printLL(node* head)
{
	node* ptr = head;
	while (ptr != nullptr)
	{
		std::cout<< ptr -> number << " -> ";
		ptr = ptr -> next;
	}
	std::cout << "NULL\n";
}
