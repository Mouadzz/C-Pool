#include "Human.hpp"

std::string Human::identify() const
{
    return this->cerveau.identify();
}

const Brain& Human::getBrain()
{
    return this->cerveau;
}

Human::Human() {}
Human::~Human() {}