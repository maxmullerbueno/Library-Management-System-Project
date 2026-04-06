#pragma once
#include <iostream>
using namespace std;

class Book {
private: // Put it private since is an internal information.
    string title;
    string author;
    string ISBN;
    int availability;

public:
// void as a pointer
    Book();
    void setBookDetails(string t, string a, string id); 
    void getBookDetails();
    int getISBN();
    void borrowBook();
    void returnBook();
};
