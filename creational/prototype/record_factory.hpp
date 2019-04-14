
#ifndef CREATIONAL_PROTOTYPE_RECORD_FACTORY_HPP
#define CREATIONAL_PROTOTYPE_RECORD_FACTORY_HPP

#include <unordered_map>
#include <memory>

#include "record.hpp"
#include "record_type.hpp"

namespace design_patterns::creational::prototype
{

class record_factory
{
private:
    std::unordered_map<record_type, std::unique_ptr<record>, std::hash<int> > m_records;

public:
    record_factory();

    std::unique_ptr<record> createRecord(record_type recordType);
};

} // end namespace design_patterns::creational::prototype

#endif /* CREATIONAL_PROTOTYPE_RECORD_FACTORY_HPP */
