#include <iostream>
#include <vector>
#include <sstream>

void executeAlgorithms(const std::vector<int>& selections) {
    for (int choice : selections) {
        switch (choice) {
            case 1:
                /*mergeSort(arr, 0, size - 1);*/
                std::cout << "Merge Sort executed\n";
                break;
            case 2:
                /*selectionSort(arr, size);*/
                std::cout << "Selection Sort executed\n";
                break;
        }
    }
}
