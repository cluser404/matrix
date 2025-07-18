#include <stdio.h>
#include "matrix.h"

int main() {
	double **matrix = create_matrix(2, 2);

	matrix[0][0] = 0;
	matrix[0][1] = 1;
	matrix[1][0] = 2;
	matrix[1][1] = 3;

	printf("%f", matrix[1][1]);

	return 0;
}
