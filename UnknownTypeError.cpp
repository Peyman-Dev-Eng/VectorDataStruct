#include "UnknownTypeError.h"
UnknownTypeError::UnknownTypeError(const std::string& msg) : std::runtime_error(msg) {}