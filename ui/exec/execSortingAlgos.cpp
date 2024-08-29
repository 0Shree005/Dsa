#include <iostream>
#include <vector>
#include <sstream>

#include "../../algorithms.h"
#include "../../ui.h"

using namespace std;

void execSortingAlgos(int* cArr, int size, const std::vector<int>& selections) {
    for (int choice : selections) {
        switch (choice) {
            case 1: {
                mergeSort(cArr, 0, size - 1);
                printArray(cArr, size);
                cout << "\nMerge Sort executed\n";
                break;
            }
            case 2: {
                /*selectionSort(arr, size);*/
                cout << "\nSelection Sort executed\n";
                break;
            }
            case 3: {
                cout << "\nExiting..." << endl;
                exit(0);
            }
        }
    }
}
