#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

string random(int len)
{

	string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string r;
	srand(time(NULL));
	for (int i = 0; i < len; i++) r.push_back(a.at(size_t(rand() % 62)));
	return r;
}

int main()
{
	cout << random(32) << endl;
	cin.get();
	return 0;
	int a[10][10], transpose[10][10], row, column, i, j;

	cout << "Enter rows and columns of matrix: ";
	cin >> row >> column;

	cout << "\nEnter elements of matrix: " << endl;

	// Storing matrix elements
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			cout << "Enter element a" << i + 1 << j + 1 << ": ";
			cin >> a[i][j];
		}
	}

	// Printing the a matrix
	cout << "\nEntered Matrix: " << endl;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			cout << " " << a[i][j];
			if (j == column - 1)
				cout << endl << endl;
	
}