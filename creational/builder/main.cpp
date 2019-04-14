
#include <iostream>

#include "hawaiian_pizza_builder.h"
#include "spicy_pizza_builder.h"
#include "Cook.h"

int main()
{
    design_patterns::creational::builder::Cook cook;
    std::shared_ptr<design_patterns::creational::builder::pizza_builder> hawaiianPizzaBuilder(
            std::make_shared<design_patterns::creational::builder::hawaiian_pizza_builder>());
    std::shared_ptr<design_patterns::creational::builder::pizza_builder> spicyPizzaBuilder(
            std::make_shared<design_patterns::creational::builder::spicy_pizza_builder>());

    cook.makePizza(hawaiianPizzaBuilder);
    cook.openPizza();

    cook.makePizza(spicyPizzaBuilder);
    cook.openPizza();
}