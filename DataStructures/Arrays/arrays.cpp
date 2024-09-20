#include <iostream>
#include <vector>
#include <sstream>
#include <limits>
#include <algorithm>

#include "../../include/algorithms.h"
#include "../../include/ui.h"

using namespace std;

const int MAX_ELEMENTS =  25000000;

void arrays()
{

    int size = 0;
    int* cArr = userInputArray(MAX_ELEMENTS, size);

    cout << "\nPress Enter to continue to Sort";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    // Sorting Algorithms
    printTitleSep("Sorting Algorithms");
    string sortingMenu = "\n1. Merge Sort\n2. Selection Sort\n3. Bubble Sort\n4. Insertion Sort\n5. Exit\n";
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
        cout << "\nThank you!\nExiting...\n";
        return;
    }

    cout << "Please enter the element you want to search: ";
    int userInput;
    cin >> userInput;
    execSearchingAlgos(cArr, size, searchingSelections, userInput);

    cout << "\nThank you!\n" << endl;

    delete[] cArr;

}
