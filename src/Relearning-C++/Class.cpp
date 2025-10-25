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

    string bookGenre()
    { // This is an Object
        if (pages < 100)
            return "Short Story";
        else if (pages < 300)
            return "Novel";
        else
            return "Philosophy";
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
    cout << "Genre:" << book2.bookGenre() << endl;

    return 0;
}