#include <iostream>
#include "Square_matrix.h"

using namespace std;

Square_matrix makeSquare_matrix(int n)
{
	Square_matrix new_Matrix(n);
	if (!new_Matrix.Init(n)) {

		exit(1);
	}

	return new_Matrix;

}

int main() {
	int n;
	cout << "Enter the order of the square matrix: ";
	cin >> n;

	Square_matrix matrix = makeSquare_matrix(n);

	matrix.Read();

	matrix.Display();

	cout << "Trace of the matrix: " << matrix.trace() << endl;

	
	cout << "Sum above the main diagonal: " << matrix.sum_up_diagonal() << endl;
	cout << "Sum below the main diagonal: " << matrix.sum_down_diagonal() << endl;


	return 0;
}