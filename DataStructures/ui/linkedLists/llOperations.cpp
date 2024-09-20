#include <iostream>
#include "../../../include/ll.h"

using namespace std;

void llOperations(node** head)
{
	int choice, value;

	do
	{
		cout << "\n1. Insert a new value" << endl;
		cout << "2. Delete the head of the list"<< endl;
		cout << "3. Print the Linked List" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case 1:
				cout << "Enter the value to insert: ";
				cin >> value;
				insertSorted(head, value);
				break;
			case 2:
				deleteStartingNode(head);
				break;
			case 3:
				printLL(*head);
				break;
			case 4:
				cout << "Thank you!\nExiting...\n";
				exit(0);
				break;
			default:
				cout << "Invalid choice, please try again.\n";
		}
	} while (choice != 4);
}
