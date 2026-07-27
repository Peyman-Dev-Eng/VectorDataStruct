cmake_minimum_required(VERSION 4.3)
project(MaoDataStruct)

set(CMAKE_CXX_STANDARD 23)

add_executable(MaoDataStruct main.cpp
        Map.h
        Map.cpp
        Hash.h
        VECTOR/Vector.h
        VECTOR/EmptySnakeBodyDataStructError.h
        VECTOR/EmptySnakeBodyDataStructError.cpp
        VECTOR/NotFoundElementError.cpp
        VECTOR/NotFoundElementError.h
        UnknownTypeError.h
        UnknownTypeError.cpp
        VECTOR/InvalidInputError.h
        VECTOR/InvalidInputError.cpp
)
