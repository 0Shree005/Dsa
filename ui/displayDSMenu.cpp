#include <iostream>
#include <vector>
#include "../ui.h"

using namespace std;

const int MAX_ELEMENTS =  25000000;

void displayDSMenu() {
    int choice;

    while (true) {
        cout << "Choose your Data Structure:" << endl;
        cout << "1. Arrays" << endl;
        cout << "2. Exit" << endl;

        cout << "\n";

        cout << "Please Choose a Data Structure from the list: ";
        cin >> choice;

        if (choice == 1) {
            cout << "You selected *Array* as your Data Structure." << endl;
            cout << "\n";
            cout << "Enter the size of the array: ";
            int size;
            cin >> size;

            if (size > MAX_ELEMENTS) {
                cout << "ERROR: Maximum allowed size is " << MAX_ELEMENTS << " elements (" << (MAX_ELEMENTS * 4 / (1024.0 * 1024.0)) << "MB)." << endl;
                exit(0);
            }

            vector<int> randomElements = generateRandomElements(size);
            break;
        } else if (choice == 2) {
            cout << "Exiting..." << endl;
            exit(0);
        } else {
            cout << "Invalid choice, please try again.\n" << endl;
        }
    }
}

