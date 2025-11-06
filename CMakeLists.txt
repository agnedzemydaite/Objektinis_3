cmake_minimum_required(VERSION 3.25)
project(Studentai)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Parenkame, kuri versija bus naudojama
option(USE_VECTOR "Use vector version" ON)
option(USE_LIST "Use list version" OFF)
option(USE_VECTOR_CLASS "Use vector_class version" OFF)

if(USE_VECTOR)
    file(GLOB SOURCES "vector_versija/*.cpp")
elseif(USE_LIST)
    file(GLOB SOURCES "list_versija/*.cpp")
elseif(USE_VECTOR_CLASS)
    file(GLOB SOURCES "vector_class_versija/*.cpp")
endif()

add_executable(Studentai ${SOURCES})
