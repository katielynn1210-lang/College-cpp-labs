/*
Author: Katie Williams
Date: 2/1/2026
Document: Calculate a character's power score based on their strength, class, and a gameplay multiplier.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;
int main() {
	int strength;
	double multiplier;
	char classType;

	
	//Set decimal place
	cout << fixed << setprecision(2);
	
	//Inputs
	cout << "Enter stength: ";
	cin >> strength;
	
	cout << "Enter multiplier: ";
	cin >> multiplier;
	
	cout << "Enter class type: ";
	cin >> classType;
	cout << endl;
	
	//Calculations
	double score = strength * multiplier;
	double finalScore = pow(score, 1.5);
	int difference = abs(strength - static_cast<int>(finalScore));
	
	//OUtputs
	cout << "Class: " << static_cast<char>(toupper(static_cast<unsigned char>(classType))) << endl;
	cout << "Calculated Score: " << finalScore << endl;
	cout << "Absolute Difference from Strength: " << difference;
	
	
	return 0;
}
