//1# Include what is necessary to recognize it.
#include <iostream>
#include "Book.h"
using namespace std;

int main(){
// Example from class to be based on:
cout << "==========================" << endl;
cout << "=   Library Management   =" << endl;
cout << "==========================" << endl;

// Create array of 5 books
Book library[5];

    // Add books details as title, , author and ISBN
    library[0].setBookDetails("C++ Basics", "Smith", "101");
    library[1].setBookDetails("Data Structures", "Brown", "102");
    library[2].setBookDetails("Algorithms", "Clark", "103");
    library[3].setBookDetails("Networking", "Jones", "104");
    library[4].setBookDetails("AI Intro", "Taylor", "105");

int option;
  while (true){
        cout << "==========================" << endl;
        cout << "=          Menu          =" << endl;
        cout << "=1.     Borrow Book      =" << endl;
        cout << "=2.     Return Book      =" << endl;
        cout << "=3.        Exit          =" << endl;
        cout << "=    Select 1, 2 or 3    =" << endl;
        cin >> option;
        cout << "You have selected the Option: " << option << endl;

      // Exit option
     if (option == 3){
            break;
        }

      // This is for borrowing a book
      if (option == 1) {
       int isbn;
       cout << "Enter ISBN to borrow book: ";
       cin >> isbn;

              
           // //ask for the first operand
       //     cout << "input the 1st number: ";
        //    cin >> number1;
        //    //ask for the second operand
        //    cout << "input the 2nd number: ";
        //    cin >> number2;
        //    double result = myCalc.add(number1, number2);
        //    cout << "The result of adding " << number1 << " and " << number2 << " is " << result << endl;
       // }

      
       // if (option == 2) {
       //     Calculator myCalc;
         //   int number1, number2;
            //ask for the first operand
         //   cout << "input the 1st number: ";
           // cin >> number1;
            //ask for the second operand
           // cout << "input the 2nd number: ";
            //cin >> number2;
            //double result = myCalc.subtract(number1, number2);
            //cout << "The result of adding " << number1 << " and " << number2 << " is " << result << endl;
       // }

      
       // if (option == 3) {
         //   Calculator myCalc;
           // int number1, number2;
            //ask for the first operand
           // cout << "input the 1st number: ";
         //   cin >> number1;
            //ask for the second operand
        //    cout << "input the 2nd number: ";
         //   cin >> number2;
        //    double result = myCalc.multiply(number1, number2);
         //   cout << "The result of adding " << number1 << " and " << number2 << " is " << result << endl;
        }
      //  if (option == 4) {
       //     Calculator myCalc;
       //     int number1, number2;
            //ask for the first operand
        //    cout << "input the 1st number: ";
       //     cin >> number1;
            //ask for the second operand
      //      cout << "input the 2nd number: ";
       //     cin >> number2;
      //      double result = myCalc.divide(number1, number2);
       //     cout << "The result of adding " << number1 << " and " << number2 << " is " << result << endl;
   //     }
  //  }
  //  cout << "Thank you, see you next time! :) " << endl;
}
  
