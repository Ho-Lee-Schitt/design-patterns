
#include <memory>
#include <string>
#include <iostream>

#include <boost/property_tree/ptree.hpp>

#include "computer.hpp"
#include "computer_factory.hpp"

int main()
{
    std::unique_ptr<design_patterns::creational::factory::computer> desktop_cmp =
            std::unique_ptr<design_patterns::creational::factory::computer>(
                    design_patterns::creational::factory::computer_factory::NewComputer("desktop"));

    std::unique_ptr<design_patterns::creational::factory::computer> laptop_cmp =
            std::unique_ptr<design_patterns::creational::factory::computer>(
                    design_patterns::creational::factory::computer_factory::NewComputer("laptop"));

    std::vector<int> vector_list;
    vector_list.push_back(1);
    vector_list.push_back(2);
    vector_list.push_back(3);
    vector_list.push_back(4);
    for (auto& v : vector_list)
    {
        std::cout << v << std::endl;
    }
    return 0;
}
