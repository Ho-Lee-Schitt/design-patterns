
#ifndef CREATIONAL_FACTORY_COMPUTER_FACTORY_HPP
#define CREATIONAL_FACTORY_COMPUTER_FACTORY_HPP

#include <string>

#include "computer.hpp"

namespace design_patterns::creational::factory
{

class computer_factory
{
public:
    static computer *NewComputer(const std::string &description);
};

} // end namespace design_patterns::creational::factory

#endif //CREATIONAL_FACTORY_COMPUTER_FACTORY_HPP
