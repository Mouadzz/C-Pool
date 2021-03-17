#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    srand(time(0));
    ZombieEvent instance;
    instance.setZombieType("Mid");
    randomChump(instance);
    randomChump(instance);
    randomChump(instance);
    return 0;
}