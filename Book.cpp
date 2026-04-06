#include "Book.h"

Book::Book() {
    availability = 1; // book starts as available
}
void Book::setBookDetails(string t, string a, int id){
    title = t;
    author = a;
    ISBN = id;
    availability = 1;
}
