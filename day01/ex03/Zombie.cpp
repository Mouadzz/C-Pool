#include "Zombie.hpp"

void Zombie::announce() const
{
    std::cout << "- " << this->_name << "(" << this->_type << ")"
              << " Braiiiiiiiiiiiiiinnnnssss ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "One Shot" << std::endl;
}

void Zombie::set_zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}

Zombie::Zombie() {}