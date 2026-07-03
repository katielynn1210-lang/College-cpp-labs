// Function header file
// Created by Katie on 3/7/2026.
// Description: Contains function  prototypes

#pragma once
#include <string>
using namespace std;

// Book class prototypes
class Book {
private:
    string title; // title of book
    string author; // author name
    int pageCount; // number of pages

public:
    // Default constructor
    Book();

    // Parameterized constructor
    Book(string title, string author, int pageCount);

    // Setters
    void setTitle(string);
    void setAuthor(string);
    void setPageCount(int);

    // Getters
    string getTitle();
    string getAuthor();
    int getPageCount();

    // Display function
    void displayBook() const;

};
