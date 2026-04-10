#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
private: // Put it private since is an internal information.
    string title;
    string author;
    string ISBN;
    bool availability;

public:
    // void as a return type
    Book();
    void setBookDetails(string t, string a, string id);
    void displayBookDetails();
    int getISBN();
    void borrowBook();
    void returnBook();
    string getTitle() const {
        return title;
    }
    void displayBookDetails() const {
        cout << title << endl;
    }
    //Sorting comparison
    bool operator>(const Book& other) const {
        return title > other.title; //alphabetical comparison
    }
};
