// Functions source file
// Created by Katie on 3/7/2026.
// Description: Contains function descriptions

#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

// Default constructor description
Book::Book() {
    title = "Unknown";
    author = "Unknown";
    pageCount = 0;
}

// Parameterized constructor description
Book::Book(string btitle, string bauthor, int bpageCount) {
    title = btitle;
    author = bauthor;
    pageCount = bpageCount;
}

// Setter description
void Book::setTitle(string btitle) {
    title = btitle;
}

void Book::setAuthor(string bauthor) {
    author = bauthor;
}

void Book::setPageCount(int bpageCount) {
    if (bpageCount < 100100 && bpageCount >= 0) { //100100 is the current highest # of pages in a single book
        pageCount = bpageCount;
    } else {
        cout << "Please enter a valid page count." << endl;
    }
}

// Getter description
string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

int Book::getPageCount() {
    return pageCount;
}

// Display function description

void Book::displayBook() const {
    cout << "----Favorite Book----" << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "PageCount: " << pageCount << endl;
}