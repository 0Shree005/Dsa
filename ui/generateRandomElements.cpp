#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "../ui.h"

std::vector<int> generateRandomElements(int size) {
    std::vector<int> elements;

    std::srand(std::time(0));

    std::cout << "Generated array: ";
    for (int i = 0; i < size; i++) {
        int randomNum = std::rand() % 100;
        elements.push_back(randomNum);
    }
    printArray(elements, size);
    return elements;
}
