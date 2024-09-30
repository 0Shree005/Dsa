#include <iostream>
#include <sstream>
#include <limits>
#include <vector>

std::vector<int> getUserSelections(const std::string& menu) {
    std::vector<int> selections;
    std::string line;
    int num;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << menu;
    std::cout << "Please enter the numbers of the algorithms you want to analyze: ";
    getline(std::cin, line);
    std::stringstream ss(line);

    while (ss >> num) {
        selections.push_back(num);
    }

    return selections;
}
