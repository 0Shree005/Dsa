#include <iostream>

#include "include/dataStructs.h"
#include "include/ui.h"

using namespace std;

int main(){

    int choice;

    int flag = true;

    while (flag) {
        printTitleSep("Data Structures");

        cout << "Choose your Data Structure:" << endl;
        cout << "1. Arrays" << endl;
        cout << "2. Linked Lists" << endl;
        cout << "3. Exit" << endl;

        cout << "\n";

        cout << "Please Choose a Data Structure from the list: ";
        cin >> choice;

       switch ( choice ) {
            case 1:
                cout << "You selected *Array* as your Data Structure.\n" << endl;
                arrays();
                flag = false;
                break;
            case 2:
                cout << "You selected *Linked Lists* as your Data Structure.\n" << endl;
                linkedLists();
                flag = false;
                break;
            case 3:
                cout << "\nExiting..." << endl;
                exit(0);
            default:
                cout << "Invalid choice, please try again.\n" << endl;
        }
    }
}
