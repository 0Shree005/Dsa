#ifndef UI_H
#define UI_H

#include <vector>

using namespace std;

// Arrays
int* userInputArray(int MAX_ELEMENTS, int& size);
void printArray(int* cArr, int size);

vector<int> generateRandomElements(int size);
vector<int> getUserSelections(const string& menu);

void displayDSMenu(int*& cArr, int& size);
void execSortingAlgos(int* cArr, int size, const std::vector<int>& selections);
void execSearchingAlgos(int* cArr, int size, const std::vector<int>& selections, int userInput);
void printResult(int userInput, int BinResult);

void printSmallSep(const std::string& title);
void printTitleSep(const std::string& title);

#endif
