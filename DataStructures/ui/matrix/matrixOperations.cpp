#include <iostream>

#include "../../../include/mat.h"
#include "../../../include/ui.h"


using namespace std;

void matrixOperations(Matrix A, Matrix B, Matrix C) {

    printTitleSep("Matrix Operations");
    cout << "\n1. Matrix Addition\n2. Matrix Subtraction\n3. Exit" << endl;

    int choice = 0;
    cout << "Enter your choice: ";
    cin >> choice;

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
            cout << "Thank you!"<< endl;
            exit(0);
            break;
        }
    }

}
