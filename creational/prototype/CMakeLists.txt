add_executable(prototype_pattern
        main.cpp
        car_record.cpp
        bike_record.cpp
        person_record.cpp
        record_factory.cpp)

target_link_libraries(prototype_pattern
        PUBLIC boost)