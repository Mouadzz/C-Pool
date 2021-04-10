/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:06:02 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/10 22:09:35 by mouadlas         ###   ########.fr       */
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

void AMateria::setXP(unsigned int xp)
{
    this->_xp = xp;
}
void AMateria::setTYPE(std::string type)
{
    this->_type = type;
}