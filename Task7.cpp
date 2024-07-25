//7. Write a program to print the following pattern using nested while loops 
//*  
//* *  
//* * *  
//* * * * 
//* * * * *


#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows in the pattern

    int q = 1; // Outer loop counter
    while (q <= rows) {
        int r = 1; // Inner loop counter
        while (r <= q) {
            cout << "*";
            r++;
        }
        cout << endl;
        q++;
    }

    return 0;
}
