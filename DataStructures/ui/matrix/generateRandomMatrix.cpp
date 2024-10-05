#include <ctime>

#include "matrix.h"

Matrix generateRandomMatrix(int rows, int cols) {
    Matrix mat;
    mat.rows = rows;
    mat.cols = cols;
    mat.data = static_cast<int**>(malloc(rows * sizeof(int*)));
    if (mat.data == nullptr) {
        perror("Failed to allocate memory for matrix rows");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; i++) {
        mat.data[i] = static_cast<int*>(malloc(cols * sizeof(int)));
        if (mat.data[i] == nullptr) {
            perror("Failed to allocate memory for matrix rows");
            exit(EXIT_FAILURE);
        }

        for (int j = 0; j < cols; j++) {
            mat.data[i][j] = rand() % 9;
        }
    }

    return mat;

}
