#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("Sasuke", 100, 100, 120, 120, 1, 60, 5, 20)
{
    std::cout << "Recompiling my combat code!" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 5, 20)
{
    std::cout << "Recompiling my combat code!" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "NOOO!" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &b)
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