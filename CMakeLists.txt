cmake_minimum_required(VERSION 4.3)
project(MaoDataStruct)

set(CMAKE_CXX_STANDARD 23)

add_executable(MaoDataStruct main.cpp
        VECTOR/Vector.h
        VECTOR/EmptySnakeBodyDataStructError.h
        VECTOR/EmptySnakeBodyDataStructError.cpp
        VECTOR/NotFoundElementError.cpp
        VECTOR/NotFoundElementError.h
        VECTOR/InvalidInputError.h
        VECTOR/InvalidInputError.cpp
)
