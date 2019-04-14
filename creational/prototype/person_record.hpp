
#ifndef CREATIONAL_PROTOTYPE_PERSON_RECORD_HPP
#define CREATIONAL_PROTOTYPE_PERSON_RECORD_HPP

#include "record.hpp"

namespace design_patterns::creational::prototype
{

class person_record : public record
{
private:
    std::string person_name_;
    int age_;

public:
    person_record(std::string person_name, int age);

    void print() override;

    std::unique_ptr<record> clone() override;

};

} // end namespace design_patterns::creational::prototype

#endif /* CREATIONAL_PROTOTYPE_PERSON_RECORD_HPP */
