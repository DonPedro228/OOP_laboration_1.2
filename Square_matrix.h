#pragma once

class Square_matrix 
{
private:
	int order;
	int **matrix;
public:
	bool Init(int n);
	Square_matrix(int n);
	~ Square_matrix();

	int getOrder() const {
		return order;
	}


	void Read();
	void Display() const;

	int trace() const;
	int sum_up_diagonal() const;
	int sum_down_diagonal() const;
};