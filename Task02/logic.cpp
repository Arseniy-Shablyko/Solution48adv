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

int find_max_element(int** matrix, int N) {
	int max = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}

	return max;
}