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
void Book::displayBookDetails()
