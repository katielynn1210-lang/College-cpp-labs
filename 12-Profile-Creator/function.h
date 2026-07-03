// Function.h
// Created by Katie Williams on 3/7/2026.
// Purpose: Initialize function prototypes

#pragma once
#include <iostream>
using namespace std;

class Pet {
private:
    string name;
    string type;
    int age;

public:
    // Default constructor
    Pet();

    //Parameterized constructor
    Pet(string name, string type, int age);

    // Setters
    void setName(string name);
    void setType(string type);
    void setAge(int age);

    // Getters
    string getName();
    string getType();
    int getAge();

    //Display pet profile
    void displayPetProfile() const;

};