#ifndef UI_H
#define UI_H

#include <vector>

using namespace std;

vector<int> generateRandomElements(int size);
vector<int> getUserSelections(const string& menu);

void displayDSMenu(int*& cArr, int& size);
void execSortingAlgos(int* cArr, int size, const std::vector<int>& selections);
void execSearchingAlgos(int* cArr, int size, const std::vector<int>& selections);

// Arrays
int* userInputArray(int MAX_ELEMENTS, int& size);
void printArray(int* cArr, int size);

#endif
