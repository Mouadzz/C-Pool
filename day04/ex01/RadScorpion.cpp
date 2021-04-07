/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:56:14 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 12:57:21 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : _hp(80), _type("RadScorpion"), Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() { std::cout << "* SPROTCH *" << std::endl; }
std::string RadScorpion::getType() const { return this->_type; }
int RadScorpion::getHP() const { return this->_hp; }
void RadScorpion::takeDamage(int dmg)
{
    if (dmg > 0)
    {
        this->_hp -= (dmg - 3);
    }
}