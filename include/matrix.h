#ifndef MATRIX_H
#define MATRIX_H

/*
 * Matrix
*/

typedef struct {
    int rows;
    int cols;
    int** data;
} Matrix;

Matrix generateRandomMatrix(int rows, int cols);
void matrixOperations(Matrix A, Matrix B, Matrix C);

#ifdef __cplusplus
#include <string>
    void printMatrix(const std::string& label, Matrix mat);
#endif

#ifdef __cplusplus
    extern "C" {
    #endif

	void addMatrix(Matrix A, Matrix B, Matrix C);
	void subMatrix(Matrix A, Matrix B, Matrix C);

    #ifdef __cplusplus
}
#endif

#endif
