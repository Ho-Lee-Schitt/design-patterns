#include <utility>


#include <iostream>

#include "car_record.hpp"

namespace design_patterns::creational::prototype
{

car_record::car_record(std::string carName, int ID)
    : m_carName(std::move(carName)), m_ID(ID)
{
}

void car_record::print()
{
    std::cout << "Car Record" << std::endl
         << "Name  : "   << m_carName << std::endl
         << "Number: "   << m_ID << std::endl << std::endl;
}

std::unique_ptr<record> car_record::clone()
{
    return std::make_unique<car_record>(*this);
}

} // end namespace design_patterns::creational::prototype
