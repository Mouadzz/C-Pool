#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("Sasuke", 60, 60, 120, 120, 1, 60, 0, 5)
{
    std::cout << "Recompiling my combat code!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 0, 5)
{
    std::cout << "Recompiling my combat code!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NOOO!" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &b)
{
    this->_hitPoints = b._hitPoints;
    this->_maxHitPoints = b._maxHitPoints;
    this->_energyPoints = b._energyPoints;
    this->_maxEnergyPoints = b._maxEnergyPoints;
    this->_level = b._level;
    this->_name = b._name;
    this->_meleeAttackDamage = b._meleeAttackDamage;
    this->_rangedAttackDamage = b._rangedAttackDamage;
    this->_armorDamageReduction = b._armorDamageReduction;
    return *this;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &obj) { std::cout << "Hey " << obj.getName() << ". Gimme five!" << std::endl; }
void NinjaTrap::ninjaShoebox(FragTrap &obj) { std::cout << "Hey " << obj.getName() << ". Gimme five!" << std::endl; }
void NinjaTrap::ninjaShoebox(ScavTrap &obj) { std::cout << "Hey " << obj.getName() << ". Gimme five!" << std::endl; }