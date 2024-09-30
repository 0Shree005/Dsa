#include "../../../include/matrix.h"

void addMatrix(Matrix A, Matrix B, Matrix C) {
	for (int i = 0; i < A.rows; i++) {
		for (int j = 0; j < A.cols; j++) {
			C.data[i][j] = A.data[i][j] + B.data[i][j];
		}
	}
}