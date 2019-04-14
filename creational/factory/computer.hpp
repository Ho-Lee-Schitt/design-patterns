
#ifndef CREATIONAL_FACTORY_COMPUTER_HPP
#define CREATIONAL_FACTORY_COMPUTER_HPP

namespace design_patterns::creational::factory
{

class computer
{
public:
    virtual void Run() = 0;
    virtual void Stop() = 0;

    virtual ~computer() {}; /* without this, you do not call Laptop or Desktop destructor in this example! */
};

} // end namespace design_patterns::creational::factory

#endif //CREATIONAL_FACTORY_COMPUTER_HPP
