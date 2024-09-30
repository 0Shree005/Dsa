#include <iostream>
#include <limits>
#include <algorithm>

#include "ui.h"

const int MAX_ELEMENTS =  25000000;

void arrays()
{

    int size = 0;
    int* cArr = userInputArray(MAX_ELEMENTS, size);

    std::cout << "\nPress Enter to continue to Sort";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    // Sorting Algorithms
    printTitleSep("Sorting Algorithms");
    std::string sortingMenu = "\n1. Merge Sort\n2. Selection Sort\n3. Bubble Sort\n4. Insertion Sort\n5. Exit\n";
    std::vector<int> sortingSelections = getUserSelections(sortingMenu);
    execSortingAlgos(cArr, size, sortingSelections);

    std::cout << "\nPress Enter to continue to Search";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    // Searching Algorithms
    printTitleSep("Searching Algorithms");
    std::string searchingMenu = "\n1. Linear Search\n2. Binary Search\n3. Exit\n";
    std::vector<int> searchingSelections = getUserSelections(searchingMenu);

    if (find(searchingSelections.begin(), searchingSelections.end(), 3) != searchingSelections.end()) {
        std::cout << "\nThank you!\nExiting...\n";
        return;
    }

    std::cout << "Please enter the element you want to search: ";
    int userInput;
    std::cin >> userInput;
    execSearchingAlgos(cArr, size, searchingSelections, userInput);

    std::cout << "\nThank you!\n" << std::endl;

    delete[] cArr;

}
