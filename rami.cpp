#include <iostream>

// 1. A
int max(int a, int b) {
	int maxNum = a;

	if (b > maxNum) maxNum = b;

	return maxNum;
}

// 1. B
int max(int a, int b, int c) {
	int maxNum = a;

	if (b > maxNum) maxNum = b;

	if (c > maxNum) maxNum = c;

	return maxNum;
}


// 1. C
int max(int* arrayOne) {
	int maxNum = arrayOne[0];

	for (int i = 1; i < 5; i++) {

		if (maxNum < arrayOne[i]) maxNum = arrayOne[i];
	}

	return maxNum;
}


// 1. D
int max(int* arrayOne, int* arrayTwo) {
	int maxNum = arrayOne[0];

	for (int i = 1; i < 5; i++) {

		if (maxNum < arrayOne[i]) maxNum = arrayOne[i];
	}

	for (int i = 0; i < 5; i++) {

		if (maxNum < arrayTwo[i]) maxNum = arrayTwo[i];
	}

	return maxNum;
}



// Q4

// A
int multiply(int a, int b, int c = 1) {

	return a * b * c;
}

// B
double multiply(double a, double b) {

	return a * b;
}

// C
int multiply(int a, int b) {

	return a * b;
}