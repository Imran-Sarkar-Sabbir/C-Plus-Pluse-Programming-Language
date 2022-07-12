#include <iostream>

struct Book
{
    std::string author_name;
    std::string book_name;
    double price;
    std::string sbn_no;
};

void print_book(Book &book)
{
    std::cout << "Book name is : " << book.book_name << std::endl;
    std::cout << "Book author name is : " << book.author_name << std::endl;
    std::cout << "Book price is : " << book.price << std::endl;
    std::cout << "Book sbn no : " << book.sbn_no << std::endl;
}

int main()
{
    Book book;
    book.author_name = "imran sarkar";
    book.book_name = "learn programming";
    book.price = 534.32;
    book.sbn_no = "3243ew23";

    print_book(book);
    system("pause");
    return 0;
}