#include <iostream>
#include "../../../include/ll.h"
using namespace std;

void printLL(node* list)
{
	node* ptr = list;
	while (ptr != nullptr)
	{
		cout<< ptr -> number << " -> ";
		ptr = ptr -> next;
	}
	cout << "NULL\n";
}
