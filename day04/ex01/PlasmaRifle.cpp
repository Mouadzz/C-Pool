/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:29:52 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 12:38:21 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21), _name("Plasma Rifle"), _apcost(5), _damage(21)
{
    std::cout << "PlasmaRifle Constructor Called" << std::endl;
}
PlasmaRifle::~PlasmaRifle() { std::cout << "PlasmaRifle Destructor Called" << std::endl; }
std::string PlasmaRifle::getName() const { return this->_name; }
int PlasmaRifle::getAPCost() const { return this->_apcost; }
int PlasmaRifle::getDamage() const { return this->_damage; }
void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}