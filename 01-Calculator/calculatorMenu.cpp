/*
Author: Katie Williams
Date: 2/8/2026
Lab Number: 3
lab Description: Display a simple calculator menu using the do while loop, 
perform the selected operation by asking for two numbers.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int choice;
	int num1;
	int num2;
	double result;
	
	cout << fixed << setprecision(2);
	
	do {
		//Display options
		cout << "-------Calculator-------" << endl;
		cout << "1. Add two numbers" << endl;
		cout << "2. Subtract two numbers" << endl;
		cout << "3. Multiply two numbers" << endl;
		cout << "4. Divide two numbers" << endl;
		cout << "5. Exit the program" << endl;
		cout << "Choose an opption (1-5): ";
		cin >> choice;
		
		// Check for valid input
		 while (cin.fail() || choice < 1 || choice > 5) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid input. Please enter a number of 1-5: ";
			cin >> choice;	
		}
		
		if (choice >=1 && choice <= 4) {
			cout << "Enter first number: ";
			cin >> num1;
			cout << "Enter second number: ";
			cin >> num2;
		}
		
		
		// Operations from the selected choice
		switch (choice) {
			case 1:
				result = num1 + num2;
				cout << "Result: " << result << endl;
				break;
			case 2:
				result = num1 - num2;
				cout << "Result: " << result << endl;
				break;
			case 3:
				result = num1 * num2;
				cout << "Result: " << result << endl;
				break;
			case 4:
				if (num2 != 0) {
					result = num1 / num2;
					cout << "Result: " << result << endl;
				} else {
					cout << "Error: Division by zero is not allowed." << endl;
				}
				break;
			case 5:
				cout << "\nExiting calculator. Goodbye!" << endl;
				break;
			default:
				cout << "Invalid choice. Please select a valid option." << endl;
		}
		
	} while (choice != 5);
	
	
	return 0;
}
