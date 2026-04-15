#include <iostream>
#include "Book.h"
using namespace std;

// Display BubbleSort according to examples
void bubbleSort(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (books[j] > books[j + 1]) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int QTY = 5; //As requested in the assessment

    cout << "==========================" << endl;
    cout << "     Library System       " << endl;
    cout << "==========================" << endl;

    // Create array 
    Book books[QTY];

    // Initialize books as determined above
    books[0].setBookDetails("C++ Basics", "Smith, Mathew", "101");
    books[1].setBookDetails("Data Structures", "Brown, Chris", "102");
    books[2].setBookDetails("Algorithms", "Clark, Benjamin", "103");
    books[3].setBookDetails("Networking", "Jones, Tom", "104");
    books[4].setBookDetails("AI Intro", "Taylor, Max", "105");

    cout << "===== TEST: Correct Book Initialisation =====";

for (int i = 0; i < 3; i++) {
    books[i].displayBookDetails();
}
    int option;

    //Display menu
    while (true) {
        cout << endl;
        cout << "========== Menu ==========" << endl;
        cout << "1.     Borrow Book        " << endl;
        cout << "2.     Return Book        " << endl;
        cout << "3.   Display All Books    " << endl;
        cout << "0.         Exit           " << endl;
        cout << "==========================";
        cout << endl;
        cout << "      Select option:      ";
        cin >> option;

        // Exit as class example
        if (option == 0) {
            break;
        }

        //search by ISBN and borrow the book if available
        else if (option == 1) {
            int ISBN;
            cout << "Type ISBN to borrow (0 to exit): ";
            cin >> ISBN;
            bool found = false;
            for (int i = 0; i < QTY; i++) {
                if (books[i].getISBN() == ISBN) {
                    books[i].borrowBook();
                    found = true;
                }
            }

            if (found == false) {
                cout << "Sorry, no book was found by this ISBN number." << endl;
            }
        }

        // search by ISBN and return the book to the library
        else if (option == 2) {
            int ISBN;
            cout << "Type ISBN to return (0 to exit): ";
            cin >> ISBN;
            bool found = false;
            for (int i = 0; i < QTY; i++) {
                if (books[i].getISBN() == ISBN) {
                    books[i].returnBook();
                    found = true;
                }
            }

            if (found == false) {
                cout << "Sorry, no book was found by this ISBN number." << endl;
            }
        }

        // display all books with their current availability
        else if (option == 3) {
            cout << endl;
            for (int i = 0; i < QTY; i++) {
                books[i].displayBookDetails();
                cout << endl;
            }
        }
    }
    
    // Sort and display all books alphabetically by title before closing
    bubbleSort(books, QTY);
    cout << "Books displayed alphabetically in the Library by title below: " << endl;
    cout << endl;
    for (int i = 0; i < QTY; i++) {
        books[i].displayBookDetails(); 
        cout << endl;
    }

    cout << endl;

    cout << "System closed as requested, see you next time!" << endl;
    return 0;
}
