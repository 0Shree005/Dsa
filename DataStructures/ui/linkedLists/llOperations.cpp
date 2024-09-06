#include <iostream>
#include "../../../include/ll.h"

using namespace std;

void llOperations(node** list)
{
	int choice, value;

	do
	{
		cout << "\n1. Insert a new value" << endl;
		cout << "2. Print the Linked List" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case 1:
				cout << "Enter the value to insert: ";
				cin >> value;
				insertSorted(list, value);
				break;
			case 2:
				printLL(*list);
				break;
			case 3:
				cout << "Exiting...\n";
				break;
			default:
				cout << "Invalid choice, please try again.\n";
		}
	} while (choice != 3);
}
