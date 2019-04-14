include(${CMAKE_ROOT}/Modules/ExternalProject.cmake)

ExternalProject_Add(
        boost_dl
        URL "https://drive.google.com/uc?export=download&id=18ZUWM7W956GTZFyC8IuaBdZGxDwK3ja7"
        PREFIX ${CMAKE_CURRENT_BINARY_DIR}
        DOWNLOAD_NAME "boost.tar.gz"
        INSTALL_COMMAND ""
)

externalproject_get_property(boost_dl SOURCE_DIR)
set(INCLUDE_DIR ${SOURCE_DIR}/include)
set(LIB_DIR ${SOURCE_DIR}/lib)

file(MAKE_DIRECTORY ${SOURCE_DIR}/include)

add_library(boost INTERFACE IMPORTED GLOBAL)
add_dependencies(boost boost_dl)
set_target_properties(boost PROPERTIES INTERFACE_COMPILE_DEFINITIONS BOOST_LOG_DYN_LNK)

set_target_properties(boost PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES ${INCLUDE_DIR}
        INTERFACE_SYSTEM_INCLUDE_DIRECTORIES ${INCLUDE_DIR})
