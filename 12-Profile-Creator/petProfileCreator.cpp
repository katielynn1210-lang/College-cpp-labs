/*
 Author: Katie Williams
 Date: 3/7/2026
 Lab Number: 3
 Lab Description: Use default and parameterized constructors, setters,
 and getters to create a pet profile.
 */

#include <iostream>
#include <string>
#include "function.h"
using namespace std;
int main() {
    // Create pet using default constructor
    Pet pet1;
    pet1.displayPetProfile();
    cout << endl;

    // Set values using setters
    pet1.setName("Chip");
    pet1.setType("Teddy Bear");
    pet1.setAge(6);
    pet1.displayPetProfile();
    cout << endl;


    // Create pet using parameterized constructor
    Pet pet2("Fry", "Teddy Bear", 3);
    pet2.displayPetProfile();
    cout << endl;

    return 0;
}
