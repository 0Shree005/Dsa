#include <iostream>
#include <vector>
#include "../../ui.h"

using namespace std;

const int MAX_ELEMENTS =  25000000;

void displayDSMenu(int*& cArr, int& size) {
    int choice;

    while (true) {
        printTitleSep("Data Structures");
        /*cout << "=====================================" << endl;*/
        /*cout << " ========= Data Structures ========= " << endl;*/
        /*cout << "=====================================" << endl;*/

        cout << "Choose your Data Structure:" << endl;
        cout << "1. Arrays" << endl;
        cout << "2. Exit" << endl;

        cout << "\n";

        cout << "Please Choose a Data Structure from the list: ";
        cin >> choice;

        if (choice == 1) {
            cout << "You selected *Array* as your Data Structure." << endl;
            cout << "\n";
            cArr = userInputArray(MAX_ELEMENTS, size);
            break;
        } else if (choice == 2) {
            cout << "\nExiting..." << endl;
            exit(0);
        } else {
            cout << "Invalid choice, please try again.\n" << endl;
        }
    }
}
