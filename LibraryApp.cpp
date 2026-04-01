#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
    cout << "==========================" << endl;
    cout << "=   Library Management   =" << endl;
    cout << "==========================" << endl;

    Book library[5];

    library[0].setBookDetails("C++ Basics", "Smith", "101");
    library[1].setBookDetails("Data Structures", "Brown", "102");
    library[2].setBookDetails("Algorithms", "Clark", "103");
    library[3].setBookDetails("Networking", "Jones", "104");
    library[4].setBookDetails("Artificial Intelligence", "Taylor", "105");

    string inputISBN;

    while (true)
    {
        cout << "Enter ISBN to borrow (0 to exit): ";
        cin >> inputISBN;

        if (inputISBN == "0")
        {
            break;
        }

        bool found = false;

        for (int i = 0; i < 5; i++)
        {
            if (library[i].getISBN() == inputISBN)
            {
                library[i].borrowBook();
                found = true;
                break;
            }
        }

        if (found == false)
        {
            cout << "Book not found." << endl;
        }
    }

    cout << "Program terminated." << endl;
    return 0;
}
