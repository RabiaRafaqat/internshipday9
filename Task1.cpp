//Basic while Loop: 
// Write a C++ program to print all even numbers between 1 and 20 using a while loop



#include <iostream>
using namespace std;

int main() {
    int num = 2; // Start with the first even number

    while (num <= 20) { // Loop until the number is 20
        cout << num << " "; // Print the current even number
        num += 2; // Move to the next even number
    }

    return 0;
}
