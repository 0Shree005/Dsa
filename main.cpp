#include <iostream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <limits>

#include "algorithms.h"
#include "ui.h"

using namespace std;

/*extern "C" {*/
/*    void linearSearch(int arr[], int size, int target);*/
/*    void mergeSort(int arr[], int left, int right);*/
/*    void selectionSort(int arr[], int size);*/
/*}*/

int main() {

    displayDSMenu();

    displaySSMenu();

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Please enter the numbers of the algorithms you want to analyze: ";
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    std::vector<int> selections;
    int num;

    while (ss >> num) {
        selections.push_back(num);
    }

    executeAlgorithms(selections);

    return 0;
}
