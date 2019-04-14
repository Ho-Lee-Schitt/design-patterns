
#include "hawaiian_pizza_builder.h"

namespace design_patterns::creational::builder
{

void hawaiian_pizza_builder::buildDough()
{
    pizza_->setDough("Cross");
}

void hawaiian_pizza_builder::buildSauce()
{
    pizza_->setSauce("mild");
}

void hawaiian_pizza_builder::buildTopping()
{
    pizza_->setTopping("ham+pineapple");
}

} // end namespace design_patterns::creational::builder