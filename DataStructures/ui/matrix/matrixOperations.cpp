#include <iostream>

#include "matrix.h"
#include "ui.h"

void matrixOperations(Matrix A, Matrix B, Matrix C) {

    printTitleSep("Matrix Operations");
    std::cout << "\n1. Matrix Addition\n2. Matrix Subtraction\n3. Exit" << std::endl;

    int choice = 0;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            addMatrix(A, B, C);
            break;
        }
        case 2: {
            subMatrix(A, B, C);
            break;
        }
        case 3: {
            std::cout << "Thank you!"<< std::endl;
            exit(0);
        }
    }

}
