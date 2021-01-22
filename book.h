#ifndef Book_H
#define Book_H
#include "printedproduct.h"
#include <iostream>

class Book : public PrintedProduct
{
protected:
    // Жанр
    std::string genre;
public:
    Book(const std::string &name, const std::string &author, const std::string &publisher, const std::string &genre);
    Book();
    // Метод вывода на экран
    void show() override;
    // Свойства
    std::string getGenre() const;
    void setGenre(const std::string &value);
};

#endif // Book_H
