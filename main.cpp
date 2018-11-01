// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 1
// Program: CS213-2018-A1-T1-P1
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    10 August 2018
// Version: 1.0

#include <iostream>
#include <iomanip>
#include "Matrix.h"
//#include <cassert>

using namespace std;


//__________________________________________

int main()
{

	int data1 [] = {1,2,3,4,5,6,7,8};
	int data2 [] = {13,233,3,4,5,6};
	int data3 [] = {10,100,10,100,10,100,10,100};

	Matrix mat1(4, 2, data1);
	Matrix mat2(2, 3, data2);
	Matrix mat3(4, 2, data3);


	/* The next code will not work until you write the functions
	cout << mat1 << endl;
	cout << mat2 << endl;
	cout << mat3 << endl;

	cout << (mat1 + mat3) << endl << endl;
	cout << (mat3 + mat3) << endl << endl;

	++mat1;
	cout << mat1 << endl;

	mat1+= mat3 += mat3;
	cout << mat1 << endl;
	cout << mat2 << endl;
	cout << mat3 << endl;
	cout << mat1 * mat2 << endl;*/
	Matrix matIn;
	int row, col;
	cout << "Enter the data for matrix as follows (Row Column Data): ";
	cin >> matIn;
	cout << endl << (matIn*matIn);
	// Add more examples of using Matrix
	// .......

	return 0;
}
