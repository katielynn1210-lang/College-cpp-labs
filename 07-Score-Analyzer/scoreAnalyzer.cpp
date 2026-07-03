/*
Author: Katie Williams
Date: 2/20/2026
Lab Number: 2 (High Score Analyzer)
Lab Description: Create an array and use loops to display 5 player scores,
calculate their average score, and finally identify and display
the highest score in the array.
*/
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void welcomeMessage();
void displayScores(double playerScores[], int numScore);
double calculateAverage(double playerScores[], int numScore);
double displayHighestScore(double playerScores[], int numScore);

int main() {
    double playerScores[5] = {985300, 742115, 1204560, 558470, 689300};
    int numScore = 5;

    welcomeMessage();
    displayScores(playerScores, numScore);

    cout << "\n-----Score Analysis-----\n";
    cout << fixed << setprecision(2) << showpoint;
    cout << "Score Average: " << calculateAverage(playerScores, numScore) << endl;
    cout << "Highest Score: " << displayHighestScore(playerScores, numScore);

    return 0;
}

//Function displays welcome message
void welcomeMessage() {
    cout << "\nWelcome to the High Score Analyzer!\n";
}

//Function displays recent game scores
void displayScores(double playerScores[], int numScore) {
    cout << "\n----Recent Game Scores----\n";
    // Loop to display the scores
    for (int i = 0; i < numScore; i++) {
        cout << (i + 1) << ". " << playerScores[i] << "\n";
    }

}

// calculate average of the player scores
double calculateAverage(double playerScores[], int numScore) {
    double sum = 0;

    for (int i = 0; i < numScore; i++) {
        sum += playerScores[i];
    }

    double average = sum / numScore;

    return average;
}

// Function to find the highest score
double displayHighestScore(double playerScores[], int numScore) {
    double highestScore = playerScores[0];

    for (int i = 1; i < numScore; i++) {
        if (playerScores[i] > highestScore) {
            highestScore = playerScores[i];
        }
    }
    return highestScore;
}
