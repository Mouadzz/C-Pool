#include "ClapTrap.hpp"

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((amount - this->_armorDamageReduction) < this->_hitPoints)
    {
        this->_hitPoints -= (amount - this->_armorDamageReduction);
    }
    else
    {
        this->_hitPoints = 0;
    }
    std::cout << "FR4G-TP " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    std::cout << "Ow hohoho, that hurts! Yipes!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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

    std::cout << "FR4G-TP " << this->_name << " takes " << amount << " points of health!" << std::endl;
    std::cout << "Sweet life juice!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &b)
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

unsigned int ClapTrap::getHitPoints() { return this->_hitPoints; }
unsigned int ClapTrap::getMaxHitPoints() { return this->_maxHitPoints; }
unsigned int ClapTrap::getEnergyPoints() { return this->_energyPoints; }
unsigned int ClapTrap::getMaxEnergyPoints() { return this->_maxEnergyPoints; }
unsigned int ClapTrap::getLevel() { return this->_level; }
std::string ClapTrap::getName() { return this->_name; }
unsigned int ClapTrap::getMeleeAttackDamage() { return this->_meleeAttackDamage; }
unsigned int ClapTrap::getRangedAttackDamage() { return this->_rangedAttackDamage; }
unsigned int ClapTrap::getArmorDamageReduction() { return this->_armorDamageReduction; }

ClapTrap::ClapTrap()
{
    std::cout << "Let's get this party started!" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage, int armorDamageReduction, int rangedAttackDamage) : _name(name), _hitPoints(hitPoints), _maxHitPoints(maxHitPoints), _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints), _level(level), _meleeAttackDamage(meleeAttackDamage), _rangedAttackDamage(armorDamageReduction), _armorDamageReduction(rangedAttackDamage)
{
    std::cout << "Let's get this party started!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Dangit, I'm out!" << std::endl;
}