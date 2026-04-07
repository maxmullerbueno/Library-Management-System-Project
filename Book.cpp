#include "Book.h"  
#include <string> // Add this include for std::stoi based on Geeks for Geeks.
using namespace std;  

Book::Book() {  
   availability = 1; // book starts as available  
}  
// Set up pointer setBookDetails as stated on Book.h  
void Book::setBookDetails(string t, string a, string id) {  
   title = t; author = a; ISBN = id; availability = 1;  
}  
// Set up pointer getBookDetails as stated on Book.h  
void Book::displayBookDetails() {  
   cout << "Title: " << title << endl;  
   cout << "Author: " << author << endl;  
   cout << "ISBN: " << ISBN << endl;  

   if (availability == true) {  
       cout << "Available: Yes" << endl;  
   } else {  
       cout << "Available: No" << endl;  
   }   
}  
// Set up getISBN and add an int ISBN.  
int Book::getISBN() {  
   return stoi(ISBN); // Convert the string ISBN to an integer and return it  
}  
// Set up pointer borrowBook as stated on Book.h  
void Book::borrowBook() {  
   if (availability == true) {  
       availability = false;  
       cout << "Book borrowed successfully." << endl;  
   } else {  
       cout << "This book is already borrowed." << endl;  
   }  
}  
// Set up pointer returnBook as stated on Book.h  
void Book::returnBook() {  
   availability = 1;  
   cout << "Book returned successfully." << endl;  
}
