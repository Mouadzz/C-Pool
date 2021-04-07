/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:48:47 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 12:55:37 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : _hp(170), _type("Super Mutant"), Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() { std::cout << "Aaargh..." << std::endl; }
std::string SuperMutant::getType() const { return this->_type; }
int SuperMutant::getHP() const { return this->_hp; }
void SuperMutant::takeDamage(int dmg)
{
    if (dmg > 0)
    {
        this->_hp -= (dmg - 3);
    }
}