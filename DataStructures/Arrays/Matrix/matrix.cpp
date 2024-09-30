#include <iostream>
#include <ctime>
#include <iomanip>

#include "../../../include/matrix.h"

void freeMatrix(Matrix mat);
void printMatrix(const std::string& label, Matrix mat);

void matrix() {

    int m, n;

    std::cout << "Enter the dimensions of the matrix(m n): ";
    std::cin >> m >> n;

    srand(time(0));

    Matrix A = generateRandomMatrix(m, n);
    Matrix B = generateRandomMatrix(m, n);
    Matrix C = generateRandomMatrix(m, n);

    matrixOperations(A, B, C);

    printMatrix("A ", A);
    printMatrix("B ", B);
    printMatrix("C ", C);

    freeMatrix(A);
    freeMatrix(B);
    freeMatrix(C);
}

void printMatrix(const std::string& label, Matrix mat) {
    std::cout << label << " (" << mat.rows << "x" << mat.cols << "):\n";

    std::cout << " +";
    for (int j = 0; j < mat.cols; j++) {
        std::cout << "---+";
    }
    std::cout << std::endl;

    for (int i = 0; i < mat.rows; i++) {
        std::cout << " |";
        for (int j = 0; j < mat.cols; j++) {
            std::cout << std::setw(2) << mat.data[i][j] << " |";
        }
        std::cout << std::endl;

        std::cout << " +";
        for (int j = 0; j < mat.cols; j++) {
            std::cout << "---+";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void freeMatrix(Matrix mat) {
    for (int i = 0; i < mat.rows; i++) {
        free(mat.data[i]);
    }
    free(mat.data);
}
