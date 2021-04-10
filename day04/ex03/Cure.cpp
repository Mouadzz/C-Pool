/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:04:46 by mouadlas          #+#    #+#             */
/*   Updated: 2021/04/10 16:50:19 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::~Cure() {}
Cure::Cure(Cure &copy) { *this = copy; }
Cure &Cure::operator=(Cure const &) { return *this; }

AMateria *Cure::clone() const
{
    AMateria *clone = new Cure();
    return clone;
}

void Cure::use(ICharacter &target)
{
    this->_xp += 10;
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}