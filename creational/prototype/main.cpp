
#include "record_factory.hpp"

int main()
{
    design_patterns::creational::prototype::record_factory recordFactory;

    auto record = recordFactory.createRecord(design_patterns::creational::prototype::CAR);
    record->print();

    record = recordFactory.createRecord(design_patterns::creational::prototype::BIKE);
    record->print();

    record = recordFactory.createRecord(design_patterns::creational::prototype::PERSON);
    record->print();

    record->set_id(20);

    return 0;
}