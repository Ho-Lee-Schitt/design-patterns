#include <ostream>

#include "pizza.h"

namespace design_patterns
{
namespace creational
{
namespace builder
{

void Pizza::setDough(const std::string &dough)
{
    dough_ = dough;
}

void Pizza::setSauce(const std::string &sauce)
{
    sauce_ = sauce;
}

void Pizza::setTopping(const std::string &topping)
{
    topping_ = topping;
}

std::ostream& operator<<(std::ostream &output, const Pizza &D)
{
    output << "Pizza with " << D.dough_ << " dough, " << D.sauce_ << " sauce and "
                     << D.topping_ << " topping. Mmm." << std::endl;
    return output;
}

} // end namespace builder
} // end namespace creational
} // end namespace design_patterns