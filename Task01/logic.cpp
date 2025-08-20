#include "logic.h"

void init(int** matrix, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % (5 + 5 + 1) - 5;
		}
	}
}

string print_matrix(int** matrix, int N) {
	string s = "";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}

	return s;
}

int count_columns_with_no_zero_elements(int** matrix, int N) {
	int counter = 0;

	for (int i = 0; i < N; i++) {
		bool is_zero = false;

		for (int j = 0; j < N; j++) {
			if (matrix[i][j] == 0) {
				is_zero = true;
				break;
			}
		}
		

		if (is_zero == false) {
			counter++;
		}
	}

	return counter;
}