 //Prime Number Check with while Loop: 
//Write a program to check if a given number is prime using a while loop for the prime checking logic.  
//hint : What is prime number learn about and you will find the ans

#include <iostream>
using namespace std;

int main() {
    int n; // Variable to store the user input
    cout << "Enter any positive integer" << endl;
    cin >> n; // Read the user input into variable n

    int i = 2; // Start checking for factors from 2

    // Loop to check if n is divisible by any number from 2 to n/2
    while (i <= n / 2) {
        if (n % i == 0) { // If n is divisible by i
            cout << n << " is not a prime number" << endl; // n is not prime
            return 0; // Exit the program as we found a factor
        } else {
            // This else block will execute if n is not divisible by i
            // However, we should only determine the result after the loop
        }
        i++; // Move to the next number
    }

    // If the loop completes without finding a divisor, n is prime
    cout << n << " is a prime number" << endl;

    return 0; 
}
