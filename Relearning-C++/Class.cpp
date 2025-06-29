#include <iostream>
using namespace std;

/**
 * Author : Katleho Nyoni
 *
 */

class Book
{
public:
    string title;
    string author;
    int pages;

    Book()
    { // Default constructor
        title = "Unknown";
        author = "Unknown";
        pages = 0;
    }

    Book(string Title, string Author, int Pages)
    { // Constructor
        title = Title;
        author = Author;
        pages = Pages;
    }
};

int main()
{
    /**Book book1;
    book1.title = " Beyond Good and Evil";
    book1.author = "Friedrich Nietzsche";
    book1.pages = 200; */

    // cout << "Title: " << book1.title << endl;

    Book book2("The Republic", "Plato", 300);
    cout << "Title: " << book2.title << endl;

    return 0;
}