/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:06:02 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/10 16:22:46 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    this->_xp = 0;
}
AMateria::AMateria()
{
    this->_xp = 0;
}
AMateria::~AMateria() {}
AMateria::AMateria(AMateria &copy)
{
    this->_type = copy._type;
    this->_xp = copy._xp;
}
AMateria &AMateria::operator=(AMateria const &copy)
{
    this->_type = copy._type;
    this->_xp = copy._xp;
    return *this;
}
std::string const &AMateria::getType() const { return this->_type; } //Returns the materia type
unsigned int AMateria::getXP() const { return this->_xp; }           //Returns the Materia's XP

void AMateria::use(ICharacter &) {}