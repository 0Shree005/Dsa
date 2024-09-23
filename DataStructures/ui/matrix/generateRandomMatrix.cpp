#include <iostream>
#include <ctime>
#include <iomanip>

#include "../../../include/mat.h"

Matrix generateRandomMatrix(int rows, int cols) {
    Matrix mat;
    mat.rows = rows;
    mat.cols = cols;
    mat.data = (int**)malloc(rows * sizeof(int*));
    if (mat.data == NULL) {
        perror("Failed to allocate memory for matrix rows");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; i++) {
        mat.data[i] = (int*)malloc(cols * sizeof(int));
        if (mat.data[i] == NULL) {
            perror("Failed to allocate memory for matrix rows");
            exit(EXIT_FAILURE);
        }

        for (int j = 0; j < cols; j++) {
            mat.data[i][j] = rand() % 9;
        }
    }

    return mat;
}
