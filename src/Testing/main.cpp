#include <iostream>


using namespace std;

// 1.6 CLASS & OBJECTS
class Book
{
public :
    string title;
    string author;
    int pages;

    /*
    Book(string Title,string Author, int Pages)
    {
    title = Title;
    author = Author;
    pages = Pages;
    }

    int main()
    {
    Book book1("Beyond Good and Evil","Friedrich Nitcheze";400)

    return 0;
    }
    */
};

int main()
{

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "John Smith";
    book1.pages = 500;

    cout << book1.title;

return 0;
}
