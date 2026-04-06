#include "Book.h"

Book::Book() {
    availability = 1; // book starts as available
}
// Set up pointer setBookDetails as stated on Book.h
void Book::setBookDetails(string t, string a, int id){
    title = t;
    author = a;
    ISBN = id;
    availability = 1;
}
// Set up pointer getBookDetails as stated on Book.h
void Book::getBookDetails()
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
// Set up getISBN and add a return ISBN.
int Book::getISBN(){
    return ISBN;
}

// Set up pointer borrowBook as stated on Book.h
