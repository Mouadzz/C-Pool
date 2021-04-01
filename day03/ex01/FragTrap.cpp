#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

FragTrap::FragTrap()
{
    std::cout << "Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
    std::cout << "Let's get this party started!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Dangit, I'm out!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    std::string atacks[] = {"TorgueFiesta Attack", "Laser Inferno Attack", "MeatUnicycle Attack", "Funzerker Attack", "Mechromagician Attack"};
    std::string damage[] = {"14", "54", "87", "15", "65"};
    if (this->_energyPoints < 25)
    {
        std::cout << "Crap, no more shots left!" << std::endl;
    }
    else
    {
        this->_energyPoints -= 25;
        int rand = std::rand() % 5;
        std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with " << atacks[rand] << " causing " << damage[rand] << " points of damage!" << std::endl;
    }
}

FragTrap &FragTrap::operator=(const FragTrap &b)
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

unsigned int FragTrap::getHitPoints() { return this->_hitPoints; }
unsigned int FragTrap::getMaxHitPoints() { return this->_maxHitPoints; }
unsigned int FragTrap::getEnergyPoints() { return this->_energyPoints; }
unsigned int FragTrap::getMaxEnergyPoints() { return this->_maxEnergyPoints; }
unsigned int FragTrap::getLevel() { return this->_level; }
std::string FragTrap::getName() { return this->_name; }
unsigned int FragTrap::getMeleeAttackDamage() { return this->_meleeAttackDamage; }
unsigned int FragTrap::getRangedAttackDamage() { return this->_rangedAttackDamage; }
unsigned int FragTrap::getArmorDamageReduction() { return this->_armorDamageReduction; }