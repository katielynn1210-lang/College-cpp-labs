// Validation.cpp
// Created by Katie Williams on 3/7/2026.
// Purpose: Implements the validated integer input function.aut

#include <iostream>
#include <string>
#include "validation.h"
using namespace std;

// Prompts the user until a valid integer between min and max is entered
int getValidatedInt(string prompt, int min, int max) {
    int value;
    cout << prompt;
    cin >> value;

    // Validate input
    while (cin.fail() || value < min || value > max) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input, try again. " << prompt;
        cin >> value;
    }
    return value;
}
