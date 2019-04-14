

#include "computer_factory.hpp"
#include "laptop.hpp"
#include "desktop.hpp"

namespace design_patterns::creational::factory
{

computer *computer_factory::NewComputer(const std::string &description)
{
    if(description == "laptop")
        return new laptop;
    if(description == "desktop")
        return new desktop;
    return nullptr;
}

} // end namespace design_patterns::creational::factory
