#include <iostream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <ctime>

#include "algorithms.h"
#include "ui.h"

using namespace std;

/*extern "C" {*/
/*    void linearSearch(int arr[], int size, int target);*/
/*    void mergeSort(int arr[], int left, int right);*/
/*    void selectionSort(int arr[], int size);*/
/*}*/

void displayMenu();
void executeAlgorithms(const std::vector<int>& selections);

int main() {

    displayMenu();

    std::cout << "Please enter the numbers of the algorithms you want to analyze: ";
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    std::vector<int> selections;
    int num;

    while (ss >> num) {
        selections.push_back(num);
    }
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    vector<int> randomElements = generateRandomElements(size);

    executeAlgorithms(selections);

    return 0;
}
