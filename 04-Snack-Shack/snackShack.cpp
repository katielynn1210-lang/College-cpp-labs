/*
Author: Katie Williams
Date: 2/1/2026
Document: Create a program that allows customers to view a menu, 
select an item, and recieve confirmation of their selection.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int choice;
	double price1 = 3.50;
	double price2 = 4.25;
	double price3 = 5.00;
	double price4 = 2.00;
	double price5 = 1.75;
	
	cout << fixed << setprecision(2);
	
	//Welcome message
	cout << "Welcome to the Snack Shack!" << endl << "Please select an item:" << endl;
	
	//Display menu items, price, and prompt user to pick an item
	cout << "1. Popcorn" << setw(10) << "- $" << price1 << endl;
	cout << "2. Hot Dog" << setw(10) << "- $" << price2 << endl;
	cout << "3. Nachos" << setw(11) << "- $" << price3 << endl;
	cout << "4. Soft Drink" << setw(7) << "- $" << price4 << endl;
	cout << "5. Candy Bar" << setw(8) << "- $" << price5 << endl << endl;
	
	cout << "Enter you choice (1-5):";
	cin >> choice;
	cout << endl;
	
	//Display the selected menu items, price, and thank you note
	switch (choice) {
	 	case 1:
	 		cout << "You selected: Popcorn" << endl;
			cout << "Price: $" << price1 << endl;
			cout << "Thank you for your purchase!";
	 		
	 		break;
	 	case 2:
		 	cout << "You selected: Hot Dog" << endl;
			cout << "Price: $" << price2 << endl;
			cout << "Thank you for your purchase!";
			 
			break; 
	 	case 3:
	 		cout << "You selected: Nachos" << endl;
			cout << "Price: $" << price3 << endl;
			cout << "Thank you for your purchase!";
	 		
	 		break;
	 	case 4:
	 		cout << "You selected: Soft Drink" << endl;
			cout << "Price: $" << price4 << endl;
			cout << "Thank you for your purchase!";
	 		
	 		break;
	 	case 5:
	 		cout << "You selected: Candy Bar" << endl;
			cout << "Price: $" << price5 << endl;
			cout << "Thank you for your purchase!";
	 		
	 		break;
	 	default:
	 		cout << "Invalid selection. Please restart the program and choose a valid item.";
	 		
	 		break;
		
	}
	
	
	
	return 0;
}
