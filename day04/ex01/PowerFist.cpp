/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:34:52 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/11 14:27:22 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}
PowerFist::~PowerFist() {}
void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist(PowerFist &copy)
{
    *this = copy;
}
PowerFist &PowerFist::operator=(PowerFist const &)
{
    return *this;
}