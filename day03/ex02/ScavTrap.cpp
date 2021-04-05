/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:20:02 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 15:23:12 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Sasuke", 100, 100, 100, 100, 1, 30, 5, 20)
{
    std::cout << "Recompiling my combat code!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 5, 20)
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

void ScavTrap::challengeNewcomer(std::string const &target)
{
    std::string chall[] = {"You versus me! Me versus you! Either way!", "I will prove to you my robotic superiority!", "Dance battle! Or, you know... regular battle.", "Man versus machine! Very tiny streamlined machine!", "Care to have a friendly duel?"};
    int rand = std::rand() % 5;
    std::cout << "Hey " << target << " ," << chall[rand] << std::endl;
}