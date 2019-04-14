
#ifndef CREATIONAL_PROTOTYPE_CAR_RECORD_HPP
#define CREATIONAL_PROTOTYPE_CAR_RECORD_HPP

#include "record.hpp"

namespace design_patterns::creational::prototype
{

class car_record : public record
{
private:
    std::string m_carName;
    int m_ID;

public:
    car_record(std::string carName, int ID);

    void print() override;

    std::unique_ptr<record> clone() override;
};

} // end namespace design_patterns::creational::prototype


#endif //CREATIONAL_PROTOTYPE_CAR_RECORD_HPP
