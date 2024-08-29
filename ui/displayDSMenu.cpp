#include <iostream>
#include <vector>
#include "../ui.h"

using namespace std;

void displayDSMenu() {
    int choice;

    while (true) {
        cout << "Choose your Data Structure:" << endl;
        cout << "1. Arrays" << endl;
        cout << "2. Exit" << endl;

        cout << "Please Choose a Data Structure from the list: ";
        cin >> choice;

        if (choice == 1) {
            cout << "You selected *Array* as your Data Structure." << endl;
            cout << "Enter the size of the array: ";
            int size;
            cin >> size;

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

