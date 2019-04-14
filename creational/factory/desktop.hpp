#ifndef CREATIONAL_FACTORY_DESKTOP_HPP
#define CREATIONAL_FACTORY_DESKTOP_HPP

#include "computer.hpp"

namespace design_patterns::creational::factory
{

class desktop : public computer
{
public:
    void Run() override;
    void Stop() override;
    virtual ~desktop() {};
private:
    bool mOn; // Whether or not the machine has been turned on
};

} // end namespace design_patterns::creational::factory

#endif //CREATIONAL_FACTORY_DESKTOP_HPP
