
#include "laptop.hpp"

namespace design_patterns::creational::factory
{

void laptop::Run()
{
    mHibernating = false;
}

void laptop::Stop()
{
    mHibernating = true;
}

} // end namespace design_patterns::creational::factory