#include <iostream>

#include "include/dataStructs.h"
#include "include/ui.h"

using namespace std;

int main(){

    int choice, dimension;

    int flag = true;

    while (flag) {
        printTitleSep("Data Structures");

        cout << "Choose your Data Structure:" << endl;
        cout << "1. Array" << endl;
        cout << "2. Linked List" << endl;
        cout << "3. Exit" << endl;

        cout << "\n";

        cout << "Please Choose a Data Structure from the list: ";
        cin >> choice;

       switch ( choice ) {
            case 1:
                cout << "\nDo you want to work with \n1. 1D Array\n2. 2D Array ( Matrix )" << endl;
                cout << "Please enter your choice: ";
                cin >> dimension;
                if ( dimension == 1 ) {
                    arrays();
                }
                else if ( dimension == 2 ) {
                    matrix();
                }
                else {
                    cout << "Invalid Choice!" << endl;
                }
                flag = false;
                break;
            case 2:
                cout << "You selected *Linked List* as your Data Structure.\n" << endl;
                linkedLists();
                flag = false;
                break;
            case 3:
                cout << "\nThank you!\nExiting..." << endl;
                exit(0);
            default:
                cout << "Invalid choice, please try again.\n" << endl;
        }
    }
}
