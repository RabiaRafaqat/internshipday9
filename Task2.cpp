//Sum Calculation with while Loop: 
//Write a program to calculate the sum of natural numbers up to a given number n using a while loop.


#include <iostream>
using namespace std;

int main() {
    int n, sum = 0; // Initialize sum to 0

    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1; // Initialize i to 1 (the first natural number)
    while (i <= n) { // Loop until i is greater than n
        sum += i; // Add i to sum
        i++; // Increment i by 1
    }

    cout << "The sum of natural numbers up to " << n << " is " << sum << endl;

    return 0;
}