#pragma once
#include <exception>
#include <stdexcept>

class EmptySnakeBodyDataStruct final : public std::runtime_error
{
public:
    EmptySnakeBodyDataStruct();
};
