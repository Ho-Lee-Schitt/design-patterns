
#include "spicy_pizza_builder.h"

namespace design_patterns::creational::builder
{

void spicy_pizza_builder::buildDough()
{
    pizza_->setDough("Pan Baked");
}

void spicy_pizza_builder::buildSauce()
{
    pizza_->setSauce("hot");
}

void spicy_pizza_builder::buildTopping()
{
    pizza_->setTopping("pepperoni+salami");
}

} // end namespace design_patterns::creational::builder