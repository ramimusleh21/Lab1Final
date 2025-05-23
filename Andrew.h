#pragma once


struct Location {
	double latitude, longitude;
};
/*
question 2 
void swap(int* a, int* b);

void swap(int &a, int &b);

*/


// question 3
void swap(Location* a, Location* b);

void swap(Location& a, Location& b);