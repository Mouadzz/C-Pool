/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:37:22 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/24 22:52:19 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Sasuke", 100, 100, 100, 100, 1, 30, 5, 20)
{
    std::cout << "Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 5, 20)
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

