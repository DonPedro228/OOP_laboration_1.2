#include "Square_matrix.h"
#include <iostream>
#include <iomanip>
using namespace std;

bool Square_matrix::Init(int n)
{
	if (n > 0) {
		order = n;
		return true;
	}
	else {
		cout << "Error! Value must be upper than 0 :)" << endl;
		return false;
	}
}

Square_matrix::Square_matrix(int n) : order(n)
{
	matrix = new int* [order];
	for (int i = 0; i < order; ++i) {
		matrix[i] = new int[order];
		for (int j = 0; j < order; ++j) {
			matrix[i][j] = 0;
		}
	}
}

Square_matrix::~Square_matrix() 
{
	for (int i = 0; i < order; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
}


int Square_matrix::trace() const
{
	int sum = 0;
	for (int i = 0; i < order; ++i) {
		sum += matrix[i][i];
	}
	return sum;
}

int Square_matrix::sum_up_diagonal() const
{
	int sum = 0;
	for (int i = 0; i < order; ++i) {
		for (int j = i + 1; j < order; ++j) {
			sum += matrix[i][j];
		}
	}
	return sum;
}

int Square_matrix::sum_down_diagonal() const
{
	int sum = 0;
	for (int i = 0; i < order; ++i) {
		for (int j = 0; j < i; ++j) {
			sum += matrix[i][j];
		}
	}
	return sum;
}

void Square_matrix::Read()
{
	cout << "Input values for the square matrix: " << endl;
	for (int i = 0; i < order; ++i) {
		for (int j = 0; j < order; ++j) {
			cout << "Matrix[" << i << "][" << j << "]: ";
			cout << setw(4);
			cin >> matrix[i][j];
		}
	}
}

void Square_matrix::Display() const 
{
	cout << "Square Matrix: " << endl;
	for (int i = 0; i < order; ++i) {
		for (int j = 0; j < order; ++j) {
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}