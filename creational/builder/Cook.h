//
// Created by Niall Hughes on 13/04/2019.
//

#ifndef DESIGN_PATTERNS_COOK_H
#define DESIGN_PATTERNS_COOK_H

#include <memory>

#include "pizza_builder.h"

namespace design_patterns::creational::builder
{

class Cook
{
public:
    void openPizza();
    void makePizza(std::shared_ptr<pizza_builder> pb);
private:
    std::shared_ptr<pizza_builder> pizza_builder_;
};

} // end namespace design_patterns::creational::builder

#endif //DESIGN_PATTERNS_COOK_H
