#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{
    public:
        int nb;
        Zombie **zomb;
        ZombieHorde(int n);
        ~ZombieHorde();
        void announce();
};

#endif