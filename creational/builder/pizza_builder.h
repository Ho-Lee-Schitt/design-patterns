
#ifndef DESIGN_PATTERNS_PIZZA_BUILDER_H
#define DESIGN_PATTERNS_PIZZA_BUILDER_H

#include <memory>

#include "pizza.h"

namespace design_patterns
{
namespace creational
{
namespace builder
{

class pizza_builder
{
public:
    virtual ~pizza_builder() = default;

    std::shared_ptr<Pizza> get_pizza();
    void createNewPizzaProduct();

    virtual void buildDough() = 0;
    virtual void buildSauce() = 0;
    virtual void buildTopping() = 0;
protected:
    std::shared_ptr<Pizza> pizza_;
};

} // end namespace builder
} // end namespace creational
} // end namespace design_patterns

#endif //DESIGN_PATTERNS_PIZZA_BUILDER_H
