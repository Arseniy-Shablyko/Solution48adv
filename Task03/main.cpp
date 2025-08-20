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

	int max_series = find_biggest_series_of_equal_numbers(matrix, N);
	cout << "Max series of equal numbers: " << max_series << endl;

	return 0;
}