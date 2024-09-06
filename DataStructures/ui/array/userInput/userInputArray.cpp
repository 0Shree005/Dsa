#include <iostream>
#include <vector>

#include "../../../../include/ui.h"

using namespace std;

int* userInputArray(int MAX_ELEMENTS, int& size) {
    if (size == 0) {
        cout << "Enter the size of the array: ";
        cin >> size;
    }

    if (size > MAX_ELEMENTS) {
        cout << "ERROR: Maximum allowed size is " << MAX_ELEMENTS << " elements (" << (MAX_ELEMENTS * 4 / (1024.0 * 1024.0)) << "MB)." << endl;
        exit(0);
    }

    vector<int> randomElements = generateRandomElements(size);
    int* cArr = new int[size];
    copy(randomElements.begin(), randomElements.end(), cArr);

    printArray(cArr, size);

    return cArr;
}
