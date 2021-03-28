#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>

class FragTrap
{
private:
    unsigned int _hitPoints;
    unsigned int _maxHitPoints;
    unsigned int _energyPoints;
    unsigned int _maxEnergyPoints;
    unsigned int _level;
    std::string _name;
    unsigned int _meleeAttackDamage;
    unsigned int _rangedAttackDamage;
    unsigned int _armorDamageReduction;
    unsigned int _torgueFiestaAttackDamage;
    unsigned int _laserInfernoAttackDamage;
    unsigned int _meatUnicycleAttackDamage;
    unsigned int _funzerkerAttackDamage;
    unsigned int _mechromagicianAttackDamage;

public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &b);
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);
    void torgueFiestaAttack(std::string const &target);
    void laserInfernoAttack(std::string const &target);
    void meatUnicycleAttack(std::string const &target);
    void funzerkerAttack(std::string const &target);
    void mechromagicianAttack(std::string const &target);

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