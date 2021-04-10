/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:24:17 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/10 22:53:36 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) : _name(name)
{
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
            std::cout << "ojdowcdw     " << i << std::endl;
            delete this->_slots[i];
        }
        this->_slots[i] = NULL;
    }

    std::cout << "ccccc" << std::endl;
}

Character::Character(Character &copy) { *this = copy; }

Character &Character::operator=(Character const &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_slots[i] != NULL)
        {
            delete this->_slots[i];
            this->_slots[i] = NULL;
        }
    }

    for (int i = 0; i < 4; i++)
        this->_slots[i] = NULL;

    this->_name = copy.getName();

    for (int i = 0; i < 4; i++)
    {
        if (copy._slots[i])
        {
            this->_slots[i] = copy._slots[i];
            this->_slots[i]->setXP(copy._slots[i]->getXP());
            this->_slots[i]->setTYPE(copy._slots[i]->getType());
        }
    }
    return *this;
}

std::string const &Character::getName() const { return this->_name; }

void Character::equip(AMateria *materia)
{
    if (materia)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_slots[i] == NULL)
            {
                this->_slots[i] = materia;
                this->_slots[i]->setXP(materia->getXP());
                this->_slots[i]->setTYPE(materia->getType());
                std::cout << "Just Equiped -> " << materia->getType() << std::endl;
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
