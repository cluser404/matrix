#include <stddef.h>
#include <stdlib.h>
#include "matrix.h"



double **create_matrix(size_t row, size_t column) {

	double **matrix = malloc(row * sizeof(double*));

	for (int i = 0; i < row; i++) {
		matrix[i] = malloc(column * sizeof(double));
	}

	return matrix;
}

