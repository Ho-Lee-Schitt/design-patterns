
#ifndef CREATIONAL_PROTOTYPE_BIKE_RECORD_HPP
#define CREATIONAL_PROTOTYPE_BIKE_RECORD_HPP

#include "record.hpp"

namespace design_patterns::creational::prototype
{

class bike_record : public record
{
private:
    std::string bike_name_;
    int m_ID;

public:
    bike_record(std::string bike_name, int ID);

    void print() override;

    std::unique_ptr<record> clone() override;

};

} // end namespace design_patterns::creational::prototype

#endif /* CREATIONAL_PROTOTYPE_BIKE_RECORD_HPP */
