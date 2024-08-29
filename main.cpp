#include <iostream>
#include <vector>
#include <sstream>
#include <limits>

#include "algorithms.h"
#include "ui.h"

using namespace std;

int main() {

    int* cArr = nullptr;
    int size = 0;

    displayDSMenu(cArr, size);

    // Sorting Algorithms
    string sortingMenu = "\nSorting Algorithms:\n1. Merge Sort\n2. Selection Sort\n3. Exit\n";
    vector<int> sortingSelections = getUserSelections(sortingMenu);
    execSortingAlgos(cArr, size, sortingSelections);

    cout << "\nPress Enter to continue to Search";

    // Searching Algorithms
    string searchingMenu = "\nSearching Algorithms:\n1. Linear Search\n2. Binary Search\n3. Exit\n";
    vector<int> searchingSelections = getUserSelections(searchingMenu);
    execSearchingAlgos(cArr, size, searchingSelections);

    delete[] cArr;

    return 0;

}
