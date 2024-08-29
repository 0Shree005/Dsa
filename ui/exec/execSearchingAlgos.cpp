#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void execSearchingAlgos(int* cArr, int size, const std::vector<int>& selections) {
    for (int choice : selections) {
        switch (choice) {
            case 1: {
                /*mergeSort(arr, 0, size - 1);*/
                cout << "\nLinear Search executed\n";
                break;
            }
            case 2: {
                /*selectionSort(arr, size);*/
                cout << "\nBinary Search executed\n";
                break;
            }
            case 3: {
                cout << "\nExiting..." << endl;
                exit(0);
            }
        }
    }
}
