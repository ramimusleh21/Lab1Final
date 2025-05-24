
#include "eni.h"

// Swap function using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;        
    *b = temp;      
}

// Swap function using references
void swap(int& a, int& b) {
    int temp = a;  
    a = b;        
    b = temp;      
}