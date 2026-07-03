// Function.cpp
// Created by Katie Williams on 3/7/2026.
// Purpose: Implement function descriptions

#include <iostream>
#include <string>
#include "function.h"
using namespace std;

// Default constructor
Pet::Pet() {
    name = "Unknown";
    type = "Unknown";
    age = 0;
}

// Parameterized constructor
Pet::Pet(string pname, string ptype, int page) {
    name = pname;
    type = ptype;
    age = page;
}

// Setters
void Pet::setName(string pname) {
    name = pname;
}

void Pet::setType(string ptype) {
    type = ptype;
}

void Pet::setAge(int page) {
    if (page > 0 && page < 30) {
        age = page;
    } else {
        cout << "Please enter a valid page.\n";
    }

}

// Getters
string Pet::getName() {
    return name;
}

string Pet::getType() {
    return type;
}

int Pet::getAge() {
    return age;
}

// Display pet profile function description
void Pet::displayPetProfile() const{
    cout << "---Your Pet Profile---\n";
    cout << "Name: " << name << endl;
    cout << "Type: " << type << endl;
    cout << "Age: " << age << endl;
}