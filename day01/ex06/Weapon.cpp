/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:36:50 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:37:23 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::Weapon() {}

Weapon::~Weapon() {}

const std::string &Weapon::getType()
{
    return this->_type;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}