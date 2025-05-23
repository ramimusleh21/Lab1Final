#include <iostream>
#include "Andrew.h"
using namespace std;


/*

3. Use the function overloading to write a function called swap that swaps two Location structs.
struct Location {
double latitude ,longitude;
};
a. Use pointers (0.5 pt.)
b. Use references (0.5 pt.)
c. Test your functions using the main function code which is provided in
the course shell. (0.5 pt.)

*/


/*
question 2
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;

}


*/


// question 3 - by andrew Burge
void swap(Location* a, Location* b) {

	Location temp = *a;
	*a = *b;
	*b = temp;


}

void swap(Location &a,Location &b) {

	Location temp;
	temp.latitude = a.latitude;
	temp.longitude = a.longitude;
	a.latitude = b.latitude;
	a.longitude = b.longitude;
	b.latitude = temp.latitude;
	b.longitude = temp.longitude;


}