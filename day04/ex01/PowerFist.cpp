/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:34:52 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 12:38:18 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Plasma Rifle", 5, 21), _name("Power Fist"), _apcost(8), _damage(50)
{
    std::cout << "PowerFist Constructor Called" << std::endl;
}
PowerFist::~PowerFist() { std::cout << " PowerFist Destructor Called" << std::endl; }
std::string PowerFist::getName() const { return this->_name; }
int PowerFist::getAPCost() const { return this->_apcost; }
int PowerFist::getDamage() const { return this->_damage; }
void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}