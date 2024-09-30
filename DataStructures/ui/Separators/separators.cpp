#include <iostream>

void printTitleSep(const std::string& title) {
    std::cout << "\n=====================================\n";
    std::cout << "     === " << title << " ===\n";
    std::cout << "=====================================\n";
}

void printSmallSep(const std::string& title) {
    std::cout << "--- " << title << " ---\n";
}
