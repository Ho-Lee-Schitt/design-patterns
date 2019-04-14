
#include "desktop.hpp"

namespace design_patterns::creational::factory
{

void desktop::Run()
{
    mOn = true;
}

void desktop::Stop()
{
    mOn = false;
}

} // end namespace design_patterns::creational::factory
