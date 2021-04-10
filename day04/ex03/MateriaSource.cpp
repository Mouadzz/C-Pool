/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:56:51 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/10 22:40:58 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_slots[i] = NULL;
}

MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource &copy)
{
    *this = copy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &)
{
    return *this;
}

void MateriaSource::learnMateria(AMateria *a)
{
    if (a)
    {
        for (int i = 0; i < 4; i++)
        {
            if (!this->_slots[i])
            {
                this->_slots[i] = a;
                std::cout << "Just Learned -> " << a->getType() << std::endl;
                break;
            }
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_slots[i])
        {
            if (this->_slots[i]->getType() == type)
            {
                std::cout << "Just Created -> " << type << std::endl;
                return this->_slots[i];
            }
        }
    }

    return 0;
}