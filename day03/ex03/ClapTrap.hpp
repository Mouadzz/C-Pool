#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
    unsigned int _hitPoints;
    unsigned int _maxHitPoints;
    unsigned int _energyPoints;
    unsigned int _maxEnergyPoints;
    unsigned int _level;
    std::string _name;
    unsigned int _meleeAttackDamage;
    unsigned int _rangedAttackDamage;
    unsigned int _armorDamageReduction;

public:
    ClapTrap();
    ClapTrap(std::string name, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage, int armorDamageReduction, int rangedAttackDamage);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &b);
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int getHitPoints();
    unsigned int getMaxHitPoints();
    unsigned int getEnergyPoints();
    unsigned int getMaxEnergyPoints();
    unsigned int getLevel();
    std::string getName();
    unsigned int getMeleeAttackDamage();
    unsigned int getRangedAttackDamage();
    unsigned int getArmorDamageReduction();
};

#endif