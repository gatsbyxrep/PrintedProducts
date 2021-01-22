#include "book.h"

std::string Book::getGenre() const
{
    return genre;
}

void Book::setGenre(const std::string &value)
{
    if(genre != "")
        genre = value;
}

Book::Book(const std::string &name, const std::string &author, const std::string &publisher, const std::string &genre)
    : PrintedProduct(name, author, publisher), genre(genre) { }
Book::Book()
    : PrintedProduct(), genre("NoGenre") { }
void Book::show()
{
    PrintedProduct::show();
    std::cout << " Genre:" << genre << std::endl;
}
