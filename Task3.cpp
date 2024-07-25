// Number Guessing Game with do-while Loop: 
//Write a number guessing game where the program generates a random number between 1 
//...and 100, and the user has to guess the number. Use a do-while loop to allow repeated 
//guesses until the correct number is guessed. 


#include <iostream>
using namespace std;

int main() {
    int num = 66; // The number to be guessed
    int guess;    // Variable to store the user's guess

    cout << "Hey, welcome to the guessing game!" << endl;

    do {
        cout << "Enter a number: ";
        cin >> guess;

        // Check if the guess is greater than, less than, or equal to the number
        if (guess > num) {
            cout << "You entered a number greater than the guess number." << endl;
        } else if (guess < num) {
            cout << "You entered a number smaller than the guess number." << endl;
        } else if (guess == num) {
            cout << "OMG, YOU GUESSED IT!" << endl;
        }

    } while (guess != num); // Continue until the guess is correct

    return 0;
}
