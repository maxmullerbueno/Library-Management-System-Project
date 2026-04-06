//1# Include what is necessary to recognize it.
#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
    cout << "==========================" << endl;
    cout << "     Library System       " << endl;
    cout << "==========================" << endl;

    // Create array of 5 books
    Book library[5];

    // Initialize books
    library[0].setBookDetails("C++ Basics", "Smith", "101");
    library[1].setBookDetails("Data Structures", "Brown", "102");
    library[2].setBookDetails("Algorithms", "Clark", "103");
    library[3].setBookDetails("Networking", "Jones", "104");
    library[4].setBookDetails("AI Intro", "Taylor", "105");

    int option;

    while (true)    {
        cout << endl;
        cout << "========== Menu ==========" << endl;
        cout << "1.     Borrow Book        " << endl;
        cout << "2.     Return Book        " << endl;
        cout << "3.   Display All Books    " << endl;
        cout << "4.         Exit           " << endl;
        cout << "      Select option:      ";
        cout << "==========================";
        cin >> option;

        // Exit
        if (option == 4){
            break;
        }

        // Borrow Book
        if (option == 1){
            int isbn;
            cout << "Enter ISBN to borrow (0 to exit): ";
            cin >> isbn;

            if (isbn == 0){
                continue;
            }

            bool found = false;

            for (int i = 0; i < 5; i++){
                if (library[i].getISBN() == isbn){
                    library[i].borrowBook();
                    found = true;
                }
            }

            if (found == false){
                cout << "Book not found." << endl;
            }
        }

        // Return Book
        if (option == 2){
            int isbn;
            cout << "Enter ISBN to return (0 to exit): ";
            cin >> isbn;

            if (isbn == 0){
                continue;
            }

            bool found = false;

            for (int i = 0; i < 5; i++){
                if (library[i].getISBN() == isbn){
                    library[i].returnBook();
                    found = true;
                }
            }

            if (found == false){
                cout << "Book not found." << endl;
            }
        }

        // Display Books
        if (option == 3){
            for (int i = 0; i < 5; i++){
                library[i].displayBookDetails();
            }
        }
    }

    cout << "Program finished." << endl;
    return 0;
}