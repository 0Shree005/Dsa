#include <iostream>

#include "ui.h"

int* userInputArray(int MAX_ELEMENTS, int& size) {
    if (size == 0) {
        std::cout << "Enter the size of the array: ";
        std::cin >> size;
    }

    if (size > MAX_ELEMENTS) {
       std::cout << "ERROR: Maximum allowed size is " << MAX_ELEMENTS << " elements (" << (MAX_ELEMENTS * 4 / (1024.0 * 1024.0)) << "MB)." << std::endl;
        exit(0);
    }

    std::vector<int> randomElements = generateRandomElements(size);
    int* cArr = new int[size];
    copy(randomElements.begin(), randomElements.end(), cArr);

    printArray(cArr, size);

    return cArr;
}
