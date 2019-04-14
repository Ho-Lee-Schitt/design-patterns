#ifndef DESIGN_PATTERNS_PIZZA_H
#define DESIGN_PATTERNS_PIZZA_H

#include <string>
#include <ostream>

namespace design_patterns
{
namespace creational
{
namespace builder
{

class Pizza
{
public:
    void setDough(const std::string& dough);
    void setSauce(const std::string& sauce);
    void setTopping(const std::string& topping);
private:
    friend std::ostream& operator<<(std::ostream &output, const Pizza &D );
    std::string dough_;
    std::string sauce_;
    std::string topping_;
};

} // end namespace builder
} // end namespace creational
} // end namespace design_patterns

#endif //DESIGN_PATTERNS_PIZZA_H
