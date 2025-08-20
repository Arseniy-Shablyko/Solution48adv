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

	int max = find_max_element(matrix, N);
	cout << "Max matrix element: " << max << endl;

	return 0;
}