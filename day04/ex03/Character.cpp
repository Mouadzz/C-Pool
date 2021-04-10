/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:24:17 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/10 11:52:46 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name) {}
Character::~Character() {}
Character::Character(Character &copy) {}
Character &Character::operator=(Character const &copy) {}

std::string const &Character::getName() const { return this->_name; }

void Character::equip(AMateria *m)
{
    if (m)
    {
        for (int i = 0; i < 4; i++)
        {
            if (!this->_slots[i])
            {
                this->_slots[i] = m;
                break;
            }
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->_slots[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_slots[idx])
    {
        this->_slots[idx]->use(target);
    }
}
