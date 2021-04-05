/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:02:36 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 17:13:47 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::get_name() { return this->_name; }

std::ostream &operator<<(std::ostream &out, Victim &c)
{
    out << "I'm " << c.get_name() << " and I like otters!" << std::endl;
    return out;
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}