/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:14:03 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 17:15:24 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::string Peon::get_name() { return this->_name; }

std::ostream &operator<<(std::ostream &out, Peon &c)
{
    out << "I'm " << c.get_name() << " and I like otters!" << std::endl;
    return out;
}