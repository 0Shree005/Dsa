#include <iostream>

#include "dataStructs.h"
#include "ui.h"

int main(){

    int choice, dimension;

    int flag = true;

    while (flag) {
        printTitleSep("Data Structures");

        std::cout << "Choose your Data Structure:" << std::endl;
        std::cout << "1. Array" << std::endl;
        std::cout << "2. Linked List" << std::endl;
        std::cout << "3. Exit" << std::endl;

        std::cout << "\n";

        std::cout << "Please Choose a Data Structure from the list: ";
        std::cin >> choice;

       switch ( choice ) {
            case 1:
                std::cout << "\nDo you want to work with \n1. 1D Array\n2. 2D Array ( Matrix )" << std::endl;
                std::cout << "Please enter your choice: ";
                std::cin >> dimension;
                if ( dimension == 1 ) {
                    arrays();
                }
                else if ( dimension == 2 ) {
                    matrix();
                }
                else {
                    std::cout << "Invalid Choice!" << std::endl;
                }
                flag = false;
                break;
            case 2:
                std::cout << "You selected *Linked List* as your Data Structure.\n" << std::endl;
                linkedLists();
                flag = false;
                break;
            case 3:
                std::cout << "\nThank you!\nExiting..." << std::endl;
                exit(0);
            default:
                std::cout << "Invalid choice, please try again.\n" << std::endl;
        }
    }
}
