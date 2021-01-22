#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "printedproduct.h"

class Magazine : public PrintedProduct
{
protected:
    // Цена за подписку
    double followPrice;
public:
    Magazine(const std::string &name, const std::string &author, const std::string &publisher, double followPrice);
    Magazine();
    // Метод вывода на экран
    void show() override;
    // Свойства
    double getFollowPrice() const;
    void setFollowPrice(double value);
};

#endif // MAGAZINE_H

