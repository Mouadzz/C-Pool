/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:44:56 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 16:27:56 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::get_name() { return this->_name; }
std::string Sorcerer::get_title() { return this->_title; }

std::ostream &operator<<(std::ostream &out, Sorcerer &c)
{
    out << "I am " << c.get_name() << ", " << c.get_title() << ", and I like ponies!" << std::endl;
    return out;
}

void Sorcerer::polymorph(Victim const &obj) const
{
    obj.getPolymorphed();
}
