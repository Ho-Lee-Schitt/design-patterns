

#ifndef CREATIONAL_PROTOTYPE_RECORD_HPP
#define CREATIONAL_PROTOTYPE_RECORD_HPP

#include <memory>

namespace design_patterns::creational::prototype
{

class record
{
public:
    virtual ~record() {}
    virtual void print() = 0;
    virtual std::unique_ptr<record> clone() = 0;
};

} // end namespace design_patterns::creational::prototype

#endif //CREATIONAL_PROTOTYPE_RECORD_HPP
