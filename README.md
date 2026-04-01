APPLICATION DEVELOPMENT

As part of a community service project, you have been hired as a software developer for the local community library. The library needs a simple system to manage their books, and your task is to develop the foundation of this system using C++. You will create a Book class that can represent individual books in the library.

You need to design a Book class that includes the following:

ATTRIBUTES:
Title: The title of the book.
Author: The author of the book.
ISBN: The unique identifier for the book.
Availability: A flag indicating whether the book is available for borrowing or is already borrowed.

METHODS:
setBookDetails(): A method to assign values to the book’s attributes.
displayBookDetails(): A method to display the book's title, author, ISBN, and current availability.
borrowBook(): A method to mark the book as borrowed (only if it's currently available).
returnBook(): A method to return the book and mark it as available again.

OBJECTIVES:
Your Book class should allow the library to manage book information efficiently and enable users to borrow and return books. The system should validate whether a book is available before allowing it to be borrowed, and display the correct details in a clear format.

MAIN APPLICATION:
Initialize an array with 5 books for the library. The system will then prompt the user to input the ISBN of the book they wish to borrow. If the requested book is unavailable, an error message should be displayed. The program will terminate when the user enters "0" as the ISBN.
