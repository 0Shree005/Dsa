#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "../../ui.h"

using namespace std;

vector<int> generateRandomElements(int size) {
    vector<int> elements;

    srand(time(0));

    for (int i = 0; i < size; i++) {
        int randomNum = rand() % 100;
        elements.push_back(randomNum);
    }
    return elements;
}
