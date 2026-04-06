#include "Book.h"
using namespace std;

Book::Book() {
    availability = 1; // book starts as available
}
// Set up pointer setBookDetails as stated on Book.h
void Book::setBookDetails(string t, string a, string id)
{
    title = t; author = a; ISBN = id; availability = 1;
}
// Set up pointer getBookDetails as stated on Book.h
void Book::displayBookDetails(){
    cout << "Title: " << endl;
    cout << "Author: " << endl;
    cout << "ISBN: " << endl;

    if (availability == 1){
        cout << "Available: Yes" << endl;
    }
    else{
        cout << "Available: No" << endl;
    }
    cout << "---------------------" << endl;
}
// Set up getISBN and add an int ISBN.
int Book::getISBN(){
    int ISBN;
}
// Set up pointer borrowBook as stated on Book.h
void Book::borrowBook(){
    if (availability == 1){
        availability = 0;
        cout << "Book borrowed successfully." << endl;
    }
    else{
        cout << "This book is already borrowed." << endl;
    }
}
// Set up pointer returnBook as stated on Book.h
void Book::returnBook(){
    availability = 1;
    cout << "Book returned successfully." << endl;
}
