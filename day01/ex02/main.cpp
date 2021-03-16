#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent instance;
    instance.setZombieType("Mid lane");
    std::srand(std::time(NULL));
    randomChump(instance);
    randomChump(instance);
    randomChump(instance);
    return 0;
}