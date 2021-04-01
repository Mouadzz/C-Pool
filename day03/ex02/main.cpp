#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    FragTrap inst("mamoussa");
    inst.rangedAttack("Konoha");
    inst.meleeAttack("pain");
    inst.takeDamage(50);
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    inst.beRepaired(15);
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    inst.vaulthunter_dot_exe("Akatsuki");
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    inst.vaulthunter_dot_exe("Akatsuki");
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    return 0;
}