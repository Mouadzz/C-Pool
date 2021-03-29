#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Recompiling my combat code!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
    std::cout << "Recompiling my combat code!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "NOOO!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &b)
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

unsigned int ScavTrap::getHitPoints() { return this->_hitPoints; }
unsigned int ScavTrap::getMaxHitPoints() { return this->_maxHitPoints; }
unsigned int ScavTrap::getEnergyPoints() { return this->_energyPoints; }
unsigned int ScavTrap::getMaxEnergyPoints() { return this->_maxEnergyPoints; }
unsigned int ScavTrap::getLevel() { return this->_level; }
std::string ScavTrap::getName() { return this->_name; }
unsigned int ScavTrap::getMeleeAttackDamage() { return this->_meleeAttackDamage; }
unsigned int ScavTrap::getRangedAttackDamage() { return this->_rangedAttackDamage; }
unsigned int ScavTrap::getArmorDamageReduction() { return this->_armorDamageReduction; }

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " Hehehehe, mwaa ha ha ha, MWAA HA HA HA!"
              << " Take This Ranged Attack"
              << " Bop! -" << this->_rangedAttackDamage << " Damage." << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << "I am a tornado of death and bullets!"
              << " Take This Melee Attack"
              << " Bop! -" << this->_meleeAttackDamage << " Damage." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if ((amount - this->_armorDamageReduction) < this->_hitPoints)
    {
        this->_hitPoints -= (amount - this->_armorDamageReduction);
    }
    else
    {
        this->_hitPoints = 0;
    }
    std::cout << "FR4G-TP " << this->_name << " takes -" << amount << " Damage."
              << " That looks like it hurts!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (amount < this->_maxHitPoints)
    {
        if ((amount + this->_hitPoints) >= this->_maxHitPoints)
        {
            this->_hitPoints = this->_maxHitPoints;
        }
        else
        {
            this->_hitPoints += amount;
        }
    }
    else
    {
        this->_hitPoints = this->_maxHitPoints;
    }

    std::cout << "FR4G-TP " << this->_name << " takes +" << amount << " Health!"
              << " Healsies!" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    std::string chall[] = {"You versus me! Me versus you! Either way!", "I will prove to you my robotic superiority!", "Dance battle! Or, you know... regular battle.", "Man versus machine! Very tiny streamlined machine!", "Care to have a friendly duel?"};
    int rand = std::rand() % 5;
    std::cout << "Hey " << target << " ," << chall[rand] << std::endl;
}