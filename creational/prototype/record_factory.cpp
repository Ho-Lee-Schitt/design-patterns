
#include <string>

#include "record_factory.hpp"
#include "car_record.hpp"
#include "bike_record.hpp"
#include "person_record.hpp"

namespace design_patterns::creational::prototype
{

record_factory::record_factory()
{
    m_records[CAR]    = std::make_unique<car_record>("Ferrari", 5050);
    m_records[BIKE]   = std::make_unique<bike_record>("Yamaha", 2525);
    m_records[PERSON] = std::make_unique<person_record>("Tom", 25);
}

std::unique_ptr<record> record_factory::createRecord(record_type recordType)
{
    return m_records[recordType]->clone();
}

} // end namespace design_patterns::creational::prototype
