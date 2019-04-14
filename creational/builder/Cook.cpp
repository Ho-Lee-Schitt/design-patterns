#include <iostream>

#include "Cook.h"

namespace design_patterns::creational::builder
{

void Cook::openPizza()
{
    std::cout << *pizza_builder_->get_pizza();
}

void Cook::makePizza(std::shared_ptr<pizza_builder> pb)
{
    pizza_builder_ = pb;
    pizza_builder_->createNewPizzaProduct();
    pizza_builder_->buildDough();
    pizza_builder_->buildSauce();
    pizza_builder_->buildTopping();
}

} // end namespace design_patterns::creational::builder