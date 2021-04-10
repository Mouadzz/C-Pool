/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:07:18 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/10 16:50:29 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::~Ice() {}
Ice::Ice(Ice &copy) { *this = copy; }
Ice &Ice::operator=(Ice const &) { return *this; }

AMateria *Ice::clone() const
{
    AMateria *clone = new Ice();
    return clone;
}

void Ice::use(ICharacter &target)
{
    this->_xp += 10;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}