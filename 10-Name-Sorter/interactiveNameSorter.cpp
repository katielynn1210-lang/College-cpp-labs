/*
 Author: Katie Williams
 Date: 2/27/2026
 Lab #: 1
 Lab Description: Uses vector<string> to build a list of names.
 Sort the names alphabetically and display the updated list.
*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

// Define the Name structure
struct Name {
    string name;

    //overload the struct so that sort() will work
    bool operator<(const Name& other) const {
        return name < other.name;
    }
};

// Function prototypes
void displayName(const vector<Name>& names);
bool isWhitespace(const string& s);


int main() {
    vector<Name> names;
    Name n;

    cout << "Enter names to sort (press Enter on a blank line to stop):\n";

    while (true) {
        cout << "Enter a name: ";
        getline(cin, n.name);

        //stops program if user enters empty string
        if (n.name.empty()) {
            break;
        }

        //validates entered name
        if (isWhitespace(n.name)) {
            cout << "Invalid input. Try again.";
            continue;
        }

        //Add to vector
        names.push_back(n);

        //Sort the vector alphabetically
        sort(names.begin(), names.end());

        displayName(names);
    }

    cout << "Program finished. Final list saved.";

    return 0;
}

//Function descriptions
//displays ordered list
void displayName(const vector<Name>& names) {

    cout << "\nSorted List of Names\n";
    cout << "-----------------------\n";
    for (const Name& n : names) {
        cout << "-" << n.name << "\n";
    }
    cout << endl;
}

//validates the inputted names
bool isWhitespace(const string& s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (!isspace(static_cast<unsigned char>(c))) return false;
    }
    return true;
}

