#include <iostream>

void printResult(int userInput, int result) {
    if(result != -1) {
        std::cout << "The element _" << userInput << "_ was found at position: _" << result + 1 << "_." << std::endl;
    }
    else {
        std::cout << "The element _" << userInput << "_ was not found in the array." << std::endl;
    }
}
