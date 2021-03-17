#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    srand(time(0));
    ZombieHorde instance(5);

    instance.announce();

    return 0;
}