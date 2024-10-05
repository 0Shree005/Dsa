#include <iostream>

#include "ll.h"

void llOperations(node** head)
{
	int choice, value;

	do
	{
		std::cout << "\n1. Insert a new value( sorted )" << std::endl;
		std::cout << "2. Insert at Head" << std::endl;
		std::cout << "3. Delete the Head of the list"<< std::endl;
		std::cout << "4. Print the Linked List" << std::endl;
		std::cout << "5. Exit" << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		std::cout << std::endl;

		switch (choice)
		{
			case 1:
				std::cout << "Enter the value to insert: ";
				std::cin >> value;
				insertSorted(head, value);
				break;
			case 2:
				std::cout << "Enter the value to insert: ";
				std::cin >> value;
				insertHead(head, value);
				break;
			case 3:
				deleteHead(head);
				break;
			case 4:
				printLL(head);
				break;
			case 5:
				freeLL(head);
				std::cout << "Thank you!\nExiting...\n";
				exit(0);
				break;
			default:
				std::cout << "Invalid choice, please try again.\n";
		}
	} while (choice != 5);
}
