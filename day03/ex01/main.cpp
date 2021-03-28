#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap Scav1;
    ScavTrap Scav2("HMAD");
    Scav1.rangedAttack("Scav2.Name");
    Scav2.meleeAttack("Scav1.Name");
    Scav1.takeDamage(20);
    Scav2.beRepaired(50);
    Scav1.challengeNewcomer("Scav2.Name");
}