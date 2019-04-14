
#ifndef CREATIONAL_FACTORY_LAPTOP_HPP
#define CREATIONAL_FACTORY_LAPTOP_HPP

#include "computer.hpp"

namespace design_patterns::creational::factory
{

class laptop : public computer
{
public:
    void Run() override;
    void Stop() override;
    virtual ~laptop() {};
private:
    bool mHibernating; // Whether or not the machine is hibernating
};

} // end namespace design_patterns::creational::factory

#endif //CREATIONAL_FACTORY_LAPTOP_HPP
