/*
 Author: Katie Williams
 Date: 3/7/2026
 Lab Number: 1
 Lab Description: Keep a track of your favorite book. Prompt user
 to enter details about their favorite book and display them.
 */


#include <iostream>
#include <string>
#include "functions.h"
#include "validation.h"

using namespace std;
int main() {
    Book myFavoriteBook; // create a Book object using default constructor

    string title, author;
    int pageCount;

    cout << "Enter the title of your favorite book: ";
    getline(cin, title);

    cout << "Enter the author of your favorite book: ";
    getline(cin, author);

    // Get page count validated
    pageCount = getValidatedInt("Enter the page: ", 0, 100100);

    // Set the values using setters
    myFavoriteBook.setTitle(title);
    myFavoriteBook.setAuthor(author);
    myFavoriteBook.setPageCount(pageCount);

    // Display book details
    myFavoriteBook.displayBook();


    return 0;
}
