#ifndef UI_H
#define UI_H

#include <string>
#include <vector>

/*
 * Arrays
*/

int* userInputArray(int MAX_ELEMENTS, int& size);
void printArray(const int* cArr, int size);

std::vector<int> generateRandomElements(int size);
std::vector<int> getUserSelections(const std::string& menu);

void displayDSMenu(int*& cArr, int& size, int MAX_ELEMENTS);
void execSortingAlgos(int* cArr, int size, const std::vector<int>& selections);
void execSearchingAlgos(int* cArr, int size, const std::vector<int>& selections, int userInput);
void printResult(int userInput, int BinResult);

/*
 * Separators
 */

void printSmallSep(const std::string& title);
void printTitleSep(const std::string& title);

#endif
