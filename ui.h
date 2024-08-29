#ifndef UI_H
#define UI_H

#include <vector>

std::vector<int> generateRandomElements(int size);

void displayDSMenu();
void displaySSMenu();
void executeAlgorithms(const std::vector<int>& selections);
void printArray(std::vector<int> elements, int size);

#endif
