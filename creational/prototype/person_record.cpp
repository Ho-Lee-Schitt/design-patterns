
#include <utility>
#include <iostream>

#include "person_record.hpp"

namespace design_patterns::creational::prototype
{

person_record::person_record(std::string person_name, int age)
    :   person_name_(std::move(person_name)), age_(age)
{
}

void person_record::print()
{
    std::cout << "Person Record" << std::endl
         << "Name : " << person_name_ << std::endl
         << "Age  : " << age_ << std::endl << std::endl;
}

std::unique_ptr<record> person_record::clone()
{
    return std::make_unique<person_record>(*this);
}

void person_record::set_id(int id)
{
    age_ = id;
}

} // end namespace design_patterns::creational::prototype