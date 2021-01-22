#ifndef PrintedProduct_H
#define PrintedProduct_H

#include <string>
#include <iostream>
class PrintedProduct
{
protected:
    // Поля присущие всем объектам
    std::string name;
    std::string author;
    std::string publisher;
public:
    PrintedProduct(const std::string &name, const std::string &author, const std::string &publisher);
    PrintedProduct();
    virtual void show();
    // Свойства
    std::string getName() const;
    void setName(const std::string &value);
    std::string getAuthor() const;
    void setAuthor(const std::string &value);
    std::string getPublisher() const;
    void setPublisher(const std::string &value);
    virtual ~PrintedProduct() = default;
};
#endif // PrintedProduct_H
