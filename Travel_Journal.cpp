#include <iostream>
#include <iomanip>

/*
 	Author: Katie Williams
 	Date: January 24, 2026
 	Description: Collect details of a travel experience to display in a travel journal
*/

using namespace std;

int main() {
	
	//Welcome message
	cout << setfill('*') << setw(45) << "*"<< endl;
	cout << "Welcome to the Travel Journal Entry Creator!" << endl;
	cout << setfill('*') << setw(45) << "*" << endl << endl;
	
	
	//User input
	string fullName;
	string destination;
	int days;
	string favoriteFood;
	int rating;
	
	cout << fixed << setprecision(2);
	
	
	cout << "What is your full name? " ;
	getline(cin, fullName);
	
	cout << "Where did you travel to? " ;
	getline(cin, destination);
	
	cout << "How many days did you stay? " ;
	cin >> days;
	
	//Clear the newline character left inn the input buffer
	cin.ignore();
	
	cout << "What was your favorite food on the trip? " ;
	getline(cin, favoriteFood);
	
	cout << "How would you rate your trip (1-10)? " ;
	cin >> rating;
	cout << endl;
	
	cin.ignore();
		
	//Get the entry
	cout << "Press \"Enter\" to write your journal entry..." << endl;
	cin.get(); // Waits for the user to press enter
	
	
	//Journal entry paragraph
	cout << " --- " << "Travel Journal Entry" << " --- "<< endl << endl;
	
	cout << "Traveler: " << fullName << endl;
	cout << fullName << " recently returned from a " << days << "-day adventure in " << destination << "." << endl;
	cout << "During the trip, " << fullName << "'s favorite dish was delicious " << favoriteFood << "." << endl;
	cout << "On a scale from 1 to 10, this journey earned a rating of " << rating << "." << endl;
	cout << "Thanks for sharing your travel story! Here's to many more adventures!" ;
	
	return 0;
}
