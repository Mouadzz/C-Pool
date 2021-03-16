#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void Zombie::announce() const
{
    std::cout << "- " << this->_name << "(" << this->_type << ")"
              << " Braiiiiiiiiiiiiiinnnnssss ..." << std::endl;
}

void randomChump(ZombieEvent &instance)
{
    std::string names[] = {"LeBlanc", "Zed", "Lucian", "Cassiopia", "Oriana", "Ryze", "Ekko"};
    int result = std::rand() % 7;
    Zombie *zomb = instance.newZombie(names[result]);
    zomb->announce();
    delete zomb;
}

Zombie::~Zombie()
{
    std::cout << "One Shot" << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}