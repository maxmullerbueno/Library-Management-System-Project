//1# Include what is necessary to recognize it.
#include <iostream>
#include "Book.h"
using namespace std;

// Display BubbleSort according to examples by Geeks for Geeks, Stack Overflow and Medium as follows
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
    const int MAX = 5; //Max the quantity as requested in the assessment

    cout << "==========================" << endl;
    cout << "     Library System       " << endl;
    cout << "==========================" << endl;

    // Create array 
    Book book[MAX];

    // Initialize books as determined above
    book[0].setBookDetails("C++ Basics", "Smith, Mathew", "101");
    book[1].setBookDetails("Data Structures", "Brown, Chris", "102");
    book[2].setBookDetails("Algorithms", "Clark, Benjamin", "103");
    book[3].setBookDetails("Networking", "Jones, Tom", "104");
    book[4].setBookDetails("AI Intro", "Taylor, Max", "105");

    int option;

    while (true) {
        cout << endl;
        cout << "========== Menu ==========" << endl;
        cout << "1.     Borrow Book        " << endl;
        cout << "2.     Return Book        " << endl;
        cout << "3.   Display All Books    " << endl;
        cout << "4.         Exit           " << endl;
        cout << "==========================";
        cout << endl;
        cout << "      Select option:      ";
        cin >> option;

        // Exit as class example
        if (option == 4) {
            break;
        }

        // Borrow Book as class example
        if (option == 1) {
            int ISBN;
            cout << "Type ISBN to borrow (0 to exit): ";
            cin >> ISBN;

            if (ISBN == 0) {
                continue;
            }

            bool found = false;

            for (int i = 0; i < 5; i++) {
                if (book[i].getISBN() == ISBN) {
                    book[i].borrowBook();
                    found = true;
                }
            }

            if (found == false) {
                cout << "Book not found." << endl;
            }
        }

        // Return Book as class example
        if (option == 2) {
            int ISBN;
            cout << "Type ISBN to return (0 to exit): ";
            cin >> ISBN;

            if (ISBN == 0) {
                continue;
            }

            bool found = false;

            for (int i = 0; i < 5; i++) {
                if (book[i].getISBN() == ISBN) {
                    book[i].returnBook();
                    found = true;
                }
            }

            if (found == false) {
                cout << "Book not found." << endl;
            }
        }

        // Display Books as class example
        if (option == 3) {
            for (int i = 0; i < 5; i++) {
                book[i].displayBookDetails();
            }
        }
    }
    
    bubbleSort(book, MAX);
    cout << "Books registered alphabetically in the Library by title: " << endl;
    cout << endl;

    for (int i = 0; i < MAX; i++) {
        book[i].display();
    }

    cout << endl;

    cout << "System closed as requested, see you next time!" << endl;
    return 0;
}