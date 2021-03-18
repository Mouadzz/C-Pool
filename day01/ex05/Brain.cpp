#include "Brain.hpp"
#include <sstream>

std::string Brain::identify() const
{
    std::stringstream sstream;
    sstream << this;
    return sstream.str();
}

Brain::Brain() {}

Brain::~Brain() {}