//Password Validation using do-while Loop: Write a program that asks the user to enter a password.
// Use a do-while loop to keep prompting the user until the correct password is entered (assume the correct password is "password123").


#include <iostream>
#include <string> // For using std::string
using namespace std;

int main() {
    string enteredPassword; // Variable to store user input
    const string correctPassword = "password123"; // The correct password
     //here const string is used to prevents accidental modification.
    // Keep asking for the password until the correct one is entered
    do {
        cout << "Enter the password: ";
        cin >> enteredPassword; // Get user input

        if (enteredPassword != correctPassword) {
            cout << "Incorrect password. Try again." << endl;
        }

    } while (enteredPassword != correctPassword); // Loop until the correct password is entered..Continue the loop as long as the enteredPassword is not equal to correctPassword

    // Inform the user that access is granted
    cout << "Password accepted. Access granted." << endl;

    return 0;
}
