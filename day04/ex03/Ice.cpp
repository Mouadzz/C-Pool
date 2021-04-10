/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:07:18 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/10 11:25:29 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::~Ice() {}
Ice::Ice(Ice &copy) {}
Ice &Ice::operator=(Ice const &copy) {}

AMateria *Ice::clone() const
{
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target._name << " *" << std::endl;
}