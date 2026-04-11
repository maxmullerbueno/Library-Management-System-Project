#include "Book.h"  
#include <string> // stoi converts string ISBN to integer
using namespace std;  

Book::Book() {  
   availability = true; // book starts as available  
}  
// Sets the book title, author and ISBN  
void Book::setBookDetails(string t, string a, string id) {  
   title = t; 
   author = a; 
   ISBN = id; 
   availability = true;  
}  

void Book::displayBookDetails() {
   cout << endl;
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
   return stoi(ISBN); 
}  
//Void for borrowBook  
void Book::borrowBook() {  
   if (availability == true) {  
       availability = false;  
       cout << "Book borrowed successfully." << endl;  
   } else {  
       cout << "This book is already borrowed." << endl;  
   }  
}  
// Void for returnBook  
void Book::returnBook() {  
   availability = true;  
   cout << "Book returned successfully." << endl;  
}
