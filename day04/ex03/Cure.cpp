/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:04:46 by mouadlas          #+#    #+#             */
/*   Updated: 2021/04/10 11:19:00 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::~Cure() {}
Cure::Cure(Cure &copy) {}
Cure &Cure::operator=(Cure const &copy) {}

AMateria *Cure::clone() const
{
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target._name << "’s wounds *" << std::endl;
}