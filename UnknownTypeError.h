#include <exception>
#include <stdexcept>
class UnknownTypeError : public std::runtime_error
{
public:
    UnknownTypeError(const std::string& msg);
};