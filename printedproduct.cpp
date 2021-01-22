#include "printedproduct.h"

std::string PrintedProduct::getName() const
{
    return name;
}

void PrintedProduct::setName(const std::string &value)
{
    name = value;
}

std::string PrintedProduct::getAuthor() const
{
    return author;
}

void PrintedProduct::setAuthor(const std::string &value)
{
    author = value;
}

std::string PrintedProduct::getPublisher() const
{
    return publisher;
}

void PrintedProduct::setPublisher(const std::string &value)
{
    publisher = value;
}

PrintedProduct::PrintedProduct(const std::string &name, const std::string &author, const std::string &publisher)
    : name(name), author(author), publisher(publisher)
{
}



PrintedProduct::PrintedProduct()
{
    this->author = "NoAuthor";
    this->name = "NoName";
    this->publisher = "NoPublisher";

}

void PrintedProduct::show()
{
    std::cout << "Name:" << name << "\n Author:" << author << "\n Publisher:" << publisher << std::endl;
}
