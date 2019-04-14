
#include "pizza_builder.h"

namespace design_patterns::creational::builder
{

std::shared_ptr<Pizza> pizza_builder::get_pizza()
{
    return pizza_;
}

void pizza_builder::createNewPizzaProduct()
{
    pizza_ = std::make_shared<Pizza>();
}

} // end namespace design_patterns::creational::builder
