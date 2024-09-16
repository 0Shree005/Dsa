#include <iostream>
#include "../../../include/ll.h"
using namespace std;

void printLL(node* head)
{
	node* ptr = head;
	while (ptr != nullptr)
	{
		cout<< ptr -> number << " -> ";
		ptr = ptr -> next;
	}
	cout << "NULL\n";
}
