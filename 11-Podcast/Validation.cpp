// Validation source file
#include <iostream>
#include "Validation.h"

// Prompts user for a positive integer and validates input
int positiveInput(const string& prompt) {
    int value;

    while (true) {
        cout << prompt;
        cin >> value;

        //checks for valid input
        if (cin.fail() || value == 0 || value < -1) {
            cout << "Invalid input. Please enter a positive whole number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            cin.ignore();
            return value;
        }
    }

}