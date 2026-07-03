#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// function prototypes
double calculateAverage(double a, double b, double c);
char returnLetterGrade(double average);
void displayGradeReport(string name, double average, char letterGrade);
double validateInput(string prompt);


int main() {
    double score1, score2, score3, average;
    string name;
    char letterGrade;

    // display only 2 decimal places
    cout << fixed << setprecision(2) << showpoint;

    // prompt for student name
    cout << "Enter student name: ";
    getline(cin,name);

    // prompt for test scores
    cout << "Enter three test scores (0-100):\n";
    score1 = validateInput("Score 1: ");
    score2 = validateInput("Score 2: ");
    score3 = validateInput("Score 3: ");

    // call functions to get avergae, lettergrade, and to display the final grade report
    average = calculateAverage(score1, score2, score3);
    letterGrade = returnLetterGrade(average);
    displayGradeReport(name, average, letterGrade);


    return 0;
}

// ----Function Definitions----
// Function to calculate the average of 3 scores
double calculateAverage(double score1, double score2, double score3)
{
    return (score1 + score2 + score3) / 3.0;
}

// Function to determine the letter grade sed on average score
char returnLetterGrade(double average) {
    //Cast to int and divide by 10 to get the "tens" digit
    int scoreRange = static_cast<int>(average) / 10;

    switch (scoreRange) {
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'F';
    }

}

// Function to display the grade report
void displayGradeReport(string name, double average, char letterGrade) {
    cout << "\n--------Grade Report--------\n" ;
    cout << "Student Name: " << name << "\n" ;
    cout << "Average Score: " << average << endl;
    cout << "Final Grade: " << letterGrade << endl;
    cout << "-----------------------------\n" ;
}

// Function prompts and validates test scores
double validateInput(string prompt)
{
    double value;
    while (true)
    {
        cout << prompt;
        cin >> value;

        if (cin.fail())
        {
            cout << "Invalid input. Please enter a numeric value.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else
        {
            cin.ignore(1000, '\n');
            return value;
        }
    }
}
