#include "ScavTrap.hpp"

int main(void)
{
    srand(time(0));
    ScavTrap Scav1;
    ScavTrap Scav2("Naruto");
    Scav1.rangedAttack(Scav2.getName());
    Scav2.meleeAttack(Scav1.getName());
    Scav1.takeDamage(20);
    Scav2.beRepaired(50);
    Scav1.challengeNewcomer(Scav2.getName());
}