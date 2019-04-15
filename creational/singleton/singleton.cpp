
#include <iostream>

#include "lock.hpp"
#include "mutex.hpp"
#include "singleton.hpp"

namespace design_patterns::creational::singleton
{

singleton::~singleton()
{
    std::cout << "In Destructor" << std::endl;
}

singleton::singleton(int _a)
    :   a(_a)
{
    std::cout << "In Constructor" << std::endl;
}

singleton *singleton::GetInstance()
{
    lock lock_(mutex_);

    std::cout << "Get Instance" << std::endl;

    // Initialized during first access
    static singleton inst(1);

    return &inst;
}

} // end namespace design_patterns::creational::singleton