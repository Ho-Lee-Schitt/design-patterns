add_executable(factory_pattern  main.cpp
        laptop.cpp
        desktop.cpp
        computer_factory.cpp)

target_link_libraries(factory_pattern
        PUBLIC boost)
