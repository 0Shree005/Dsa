#include <iostream>
#include "../../../include/ll.h"

using namespace std;

void llOperations(node** head)
{
	int choice, value;

	do
	{
		cout << "\n1. Insert a new value" << endl;
		cout << "2. Insert at Head" << endl;
		cout << "3. Delete the Head of the list"<< endl;
		cout << "4. Print the Linked List" << endl;
		cout << "5. Exit" << endl;
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
				cout << "Enter the value to insert: ";
				cin >> value;
				insertHead(head, value);
				break;
			case 3:
				deleteHead(head);
				break;
			case 4:
				printLL(*head);
				break;
			case 5:
				cout << "Thank you!\nExiting...\n";
				exit(0);
				break;
			default:
				cout << "Invalid choice, please try again.\n";
		}
	} while (choice != 5);
}
