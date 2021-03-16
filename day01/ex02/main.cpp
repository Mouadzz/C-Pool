#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main()
{
    ZombieEvent instance;
    instance.setZombieType("Mid lane");

    randomChump(instance);

    return 0;
}