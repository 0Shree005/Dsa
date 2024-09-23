/*PLESAE CHECK THE PRINTll line WHEN THE PROGRAM RUNS AGAIN, BECAUSE I DON"T REMEMEBER WHY I ADDED IT IN THE LL.h and NOT in the cpp thing*/

#include <iostream>
#include <ctime>
#include <iomanip>

#include "../../../include/ui.h"
#include "../../../include/algorithms.h"
#include "../../../include/mat.h"

using namespace std;

void freeMatrix(Matrix mat);
void printMatrix(const std::string label, Matrix mat);

void matrix() {

    int m, n;

    cout << "Enter the dimensions of the matrix(m n): ";
    cin >> m >> n;

    srand(time(0));

    Matrix A = generateRandomMatrix(m, n);
    Matrix B = generateRandomMatrix(m, n);
    Matrix C = generateRandomMatrix(m, n);

    matrixOperations(A, B, C);

    printMatrix("A ",A);
    printMatrix("B ",B);
    printMatrix("C ",C);

    freeMatrix(A);
    freeMatrix(B);
    freeMatrix(C);
}

void printMatrix(const std::string label, Matrix mat) {
    cout << label << " (" << mat.rows << "x" << mat.cols << "):\n";

    cout << " +";
    for (int j = 0; j < mat.cols; j++) {
        cout << "---+";
    }
    cout << endl;

    for (int i = 0; i < mat.rows; i++) {
        cout << " |";
        for (int j = 0; j < mat.cols; j++) {
            cout << setw(2) << mat.data[i][j] << " |";
        }
        cout << endl;

        cout << " +";
        for (int j = 0; j < mat.cols; j++) {
            cout << "---+";
        }
        cout << endl;
    }
    cout << endl;
}

void freeMatrix(Matrix mat) {
    for (int i = 0; i < mat.rows; i++) {
        free(mat.data[i]);
    }
    free(mat.data);
}
