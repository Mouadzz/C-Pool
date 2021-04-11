/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:29:44 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/11 14:21:58 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
    this->_name = name;
    this->_apcost = apcost;
    this->_damage = damage;
}
AWeapon::~AWeapon() {}
std::string AWeapon::getName() const { return this->_name; }
int AWeapon::getAPCost() const { return this->_apcost; }
int AWeapon::getDamage() const { return this->_damage; }
void AWeapon::attack() const {}

AWeapon::AWeapon() {}

AWeapon::AWeapon(AWeapon &copy)
{
    this->_name = copy.getName();
    this->_apcost = copy.getAPCost();
    this->_damage = copy.getDamage();
}

AWeapon &AWeapon::operator=(AWeapon const &copy)
{
    this->_name = copy.getName();
    this->_apcost = copy.getAPCost();
    this->_damage = copy.getDamage();
    return *this;
}