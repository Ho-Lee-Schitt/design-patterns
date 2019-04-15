
#include <iostream>

#include "mutex.hpp"
#include "lock.hpp"
#include "singleton.hpp"

design_patterns::creational::singleton::mutex design_patterns::creational::singleton::singleton::mutex_;

int main()
{
    design_patterns::creational::singleton::singleton* singleton =
            design_patterns::creational::singleton::singleton::GetInstance();
    std::cout << "The value of the singleton: " << singleton->a << std::endl;
    return 0;
}
