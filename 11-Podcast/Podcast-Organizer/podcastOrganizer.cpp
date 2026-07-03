/*
 Author: Katie Williams
 Date: 2/20/2026
 Lab Number: 1 (Podcast Episode Organizer)
 Lab Description: Use string arrays and loops to create a program
 that prompts, collects, and then displays a list of five podcast
 titles.
 */

#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
void welcomeMessage();
void addEpisodeTitle(string names[], int& count, int capacity);
void displayEpisodeTitle(const string names[], int count);

int main() {
    string names[5];
    int count = 0;
    int capacity = 5;

    welcomeMessage();

    while (count < 5) {
        addEpisodeTitle(names, count, capacity);
    }

    displayEpisodeTitle(names, count);

    return 0;

}

// Function Descriptions

// Display welcome message
void welcomeMessage() {
    cout << "Welcome to the Podcast Episode Organizer!\n\n";
}

// Prompt for podcast episode titles
void addEpisodeTitle(string names[], int& count, int capacity) {
    string newTitle;
    cout << "Enter the title of the episode: ";
    getline(cin,newTitle);

    names[count] = newTitle;
    count++;

    cout << "Title added successfully.\n";
}

// Display inputted episode titles
void displayEpisodeTitle(const string names[], int count) {
    cout << "\nList of episode titles:\n" ;
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". " << names[i] << endl;
    }
}
