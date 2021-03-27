#include "FragTrap.hpp"

int main(void)
{
    srand(time(0));
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