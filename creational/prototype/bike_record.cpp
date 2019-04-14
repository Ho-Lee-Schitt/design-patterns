
#include <iostream>

#include "bike_record.hpp"

namespace design_patterns::creational::prototype
{

bike_record::bike_record(std::string bike_name, int ID)
    : bike_name_(std::move(bike_name)), m_ID(ID)
{
}

void bike_record::print()
{
    std::cout << "Bike Record" << std::endl
              << "Name  : "   << bike_name_ << std::endl
              << "Number: "   << m_ID << std::endl << std::endl;
}

std::unique_ptr<record> bike_record::clone()
{
    return std::make_unique<bike_record>(*this);
}

} // end namespace design_patterns::creational::prototype
