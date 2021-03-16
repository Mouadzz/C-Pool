#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void Zombie::announce() const
{
    std::cout << "- " << this->_name << "(" << this->_type << ")"
              << " Braiiiiiiiiiiiiiinnnnssss ..." << std::endl;
}

void randomChump(ZombieEvent &instance)
{
    Zombie * zomb = instance.newZombie("LeBlanc");
    zomb->announce();
    delete zomb;
}