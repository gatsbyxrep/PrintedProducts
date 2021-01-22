#include "magazine.h"

double Magazine::getFollowPrice() const
{
    return followPrice;
}

void Magazine::setFollowPrice(double value)
{
    if(value >= 0.0)
        followPrice = value;
}

Magazine::Magazine(const std::string &name, const std::string &author, const std::string &publisher, double followPrice)
    : PrintedProduct(name, author, publisher), followPrice(followPrice) { }
Magazine::Magazine()
    : PrintedProduct(), followPrice(0.0) { }
void Magazine::show()
{
    PrintedProduct::show();
    std::cout << " Follow price:" << followPrice << std::endl;
}


