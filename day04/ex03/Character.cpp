/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:24:17 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/10 17:46:07 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) : _name(name)
{
    this->_slots = new AMateria *[4];
    for (int i = 0; i < 4; i++)
        this->_slots[i] = NULL;
}

Character::~Character()
{
    std::cout << "Deleting Slots" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_slots[i])
        {
            delete this->_slots[i];
            this->_slots[i] = NULL;
        }
    }
    delete [] this->_slots;
}

Character::Character(Character &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_slots[i])
        {
            delete this->_slots[i];
            this->_slots[i] = NULL;
        }
    }
    delete [] this->_slots;

    this->_slots = new AMateria *[4];
    for (int i = 0; i < 4; i++)
        this->_slots[i] = copy._slots[i];
}

Character &Character::operator=(Character const &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_slots[i])
        {
            delete this->_slots[i];
            this->_slots[i] = NULL;
        }
    }
    delete [] this->_slots;

    this->_slots = new AMateria *[4];
    for (int i = 0; i < 4; i++)
        this->_slots[i] = copy._slots[i];
    return *this;
}

std::string const &Character::getName() const { return this->_name; }

void Character::equip(AMateria *m)
{
    if (m)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_slots[i] == NULL)
            {
                this->_slots[i] = m;
                std::cout << "Just Equiped -> " << m->getType() << std::endl;
                break;
            }
        }
    }
}

void Character::unequip(int idx)
{
    if (this->_slots[idx])
    {
        std::cout << "Just Unequiped -> " << this->_slots[idx]->getType() << std::endl;
        this->_slots[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_slots[idx])
    {
        this->_slots[idx]->use(target);
        std::cout << this->_slots[idx]->getType() << " has " << this->_slots[idx]->getXP() << " XP." << std::endl;
    }
    else
    {
        std::cout << "Couldn't attack !" << std::endl;
    }
}
