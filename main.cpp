#include <iostream>
#include <vector>
#include <sstream>
#include <limits>
#include <algorithm>

#include "algorithms.h"
#include "ui.h"

using namespace std;

int main() {

    int* cArr = nullptr;
    int size = 0;

    displayDSMenu(cArr, size);

    cout << "\nPress Enter to continue to Sort";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    // Sorting Algorithms
    printTitleSep("Sorting Algorithms");
    string sortingMenu = "\n1. Merge Sort\n2. Selection Sort\n3. Exit\n";
    vector<int> sortingSelections = getUserSelections(sortingMenu);
    execSortingAlgos(cArr, size, sortingSelections);

    cout << "\nPress Enter to continue to Search";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    // Searching Algorithms
    printTitleSep("Searching Algorithms");
    string searchingMenu = "\n1. Linear Search\n2. Binary Search\n3. Exit\n";
    vector<int> searchingSelections = getUserSelections(searchingMenu);

    if (find(searchingSelections.begin(), searchingSelections.end(), 3) != searchingSelections.end()) {
        cout << "\nExiting...\n";
        return 0;
    }

    cout << "Please enter the element you want to search: ";
    int userInput;
    cin >> userInput;
    execSearchingAlgos(cArr, size, searchingSelections, userInput);

    delete[] cArr;

    return 0;

}
