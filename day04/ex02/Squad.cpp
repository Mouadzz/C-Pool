/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:49:26 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/09 15:55:16 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() { this->_nUnit = 0; }

Squad::Squad(Squad &copy)
{
    if (this->_nUnit > 0)
    {
        for (int i = 0; i < this->_nUnit; i++)
            delete this->_units[i];
    }

    this->_nUnit = copy._nUnit;
    for (int i = 0; i < copy._nUnit; i++)
        this->_units[i] = copy._units[i];
}

Squad &Squad::operator=(Squad const &copy)
{
    if (this->_nUnit > 0)
    {
        for (int i = 0; i < this->_nUnit; i++)
            delete this->_units[i];
    }

    this->_nUnit = copy._nUnit;
    for (int i = 0; i < copy._nUnit; i++)
        this->_units[i] = copy._units[i];
    return *this;
}

Squad::~Squad()
{
    for (int i = 0; i < this->_nUnit; i++)
        delete this->_units[i];
    delete this->_units;
}

int Squad::getCount() const { return this->_nUnit; }

ISpaceMarine *Squad::getUnit(int u) const
{
    if (this->_units[u])
        return this->_units[u];
    return nullptr;
}

int Squad::push(ISpaceMarine *obj)
{
    if (obj != NULL)
    {
        int i = 0;
        ISpaceMarine *tmp[this->_nUnit + 1];
        while (i < this->_nUnit)
        {
            tmp[i] = this->_units[i];
            if (this->_units[i] == obj)
                return this->_nUnit;
            i++;
        }
        tmp[i] = obj;
        delete[] this->_units;
        this->_units = new ISpaceMarine *[this->_nUnit + 2];
        for (int j = 0; j < this->_nUnit + 1; j++)
        {
            this->_units[j] = tmp[j];
        }
        this->_units[this->_nUnit + 1] = NULL;
        this->_nUnit++;
    }
    return this->_nUnit;
}