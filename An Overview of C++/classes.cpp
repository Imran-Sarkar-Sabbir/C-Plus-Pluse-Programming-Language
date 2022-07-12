#include <iostream>

class Book
{
private:
    std::string author_name;
    std::string book_name;
    double price;
    std::string sbn_no;

public:
    Book() {}
    void set_author(std::string name) { this->author_name = name; }
    std::string get_author() { return this->author_name; }

    void set_name(std::string name) { this->book_name = name; }
    std::string get_name() { return this->book_name; }

    void set_price(double d) { this->price = d; }
    double get_price() { return this->price; }

    void set_sbn_no(std::string sbn) { this->sbn_no = sbn; }
    std::string get_sbn_no() { return this->sbn_no; }
};

void print_book(Book &book)
{
    std::cout << "Book name is : " << book.get_name() << std::endl;
    std::cout << "Book author name is : " << book.get_author() << std::endl;
    std::cout << "Book price is : " << book.get_price() << std::endl;
    std::cout << "Book sbn no : " << book.get_sbn_no() << std::endl;
}

int main()
{
    Book book;
    book.set_author("imran sarkar");
    book.set_name("learn programming");
    book.set_price(534.32);
    book.set_sbn_no("3243ew23");

    print_book(book);
    system("pause");
    return 0;
}