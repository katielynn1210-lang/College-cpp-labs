/*
Author: Katie Williams
Date: 2/8/2026
Lab Number: 2
Lab Description: Make use of a for look to neatly display a list of multiples for a number the user selects.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int number;
	int multiple;
	int product;
	
	//Welcome message
	cout << "Welcome! In this app you can generate and practice the multiples of any number you choose!" << endl;
    cout << setw(125) << setfill('-');
    
    
    //Ask user for number input
	cout << "\n \nInput a positive number: ";
	cin >> number;
	
	//Number input validation
	while (cin.fail() || number < 0){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input. Please enter a positive number: ";
		cin >> number;
	}
	
	//Ask user for multiple input
	cout << "Input the number of multiples you want to see: ";
	cin >> multiple;
	
	//Multiple input validation
	while (cin.fail() || number < 0){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input. Please enter a positive number.";
		cin >> multiple;
	}
	
	
	//'for' Loop to display the multiples
	for (int i = 1; i <= multiple; i++) {
		product = number * i;
		cout << number << " * " << i << " = " << product << endl;
		
	}
	
	
	// Goodbye message
	cout << "\nThank you for trying our app! Bye bye for now";
	
	return 0;
}
