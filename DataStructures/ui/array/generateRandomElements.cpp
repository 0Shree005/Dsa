#include <ctime>

#include "../../../include/ui.h"

std::vector<int> generateRandomElements(int size) {
    std::vector<int> elements;

    srand(time(0));

    for (int i = 0; i < size; i++) {
        int randomNum = rand() % 100;
        elements.push_back(randomNum);
    }
    return elements;
}
