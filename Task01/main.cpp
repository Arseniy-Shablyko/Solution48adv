#include "logic.h"

int main() {
	int N;

	cout << "Input matrix size(N): ";
	cin >> N;

	int** matrix = new int* [N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N];
	}

	init(matrix, N);
	cout << "Matrix: \n" << print_matrix(matrix, N) << endl;

	int counter = count_columns_with_no_zero_elements(matrix, N);
	cout << "Number of columns with no zero numbers: " << counter << endl;

	return 0;
}