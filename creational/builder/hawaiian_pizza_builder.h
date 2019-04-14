
#ifndef DESIGN_PATTERNS_HAWAIIAN_PIZZA_BUILDER_H
#define DESIGN_PATTERNS_HAWAIIAN_PIZZA_BUILDER_H

#include "pizza_builder.h"

namespace design_patterns::creational::builder
{

class hawaiian_pizza_builder : public pizza_builder
{
public:
    void buildDough() override;
    void buildSauce() override;
    void buildTopping() override;
};

} // end namespace design_patterns::creational::builder


#endif //DESIGN_PATTERNS_HAWAIIAN_PIZZA_BUILDER_H
