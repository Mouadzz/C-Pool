/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:49:26 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/08 14:52:25 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() { this->_nUnit = 0; }
Squad::~Squad()
{
    for (int i = 0; i < this->_nUnit; i++)
    {
        delete this->_units[i];
    }
}
int Squad::getCount() const { return this->_nUnit; }
ISpaceMarine *Squad::getUnit(int u) const
{
    if (u >= 0 && u <= this->_nUnit)
    {
        return this->_units[u];
    }
    return nullptr;
}
int Squad::push(ISpaceMarine *obj)
{
    if (obj)
    {
        for (int i = 0; i < this->_nUnit; i++)
        {
            if (obj == this->_units[i])
                return this->_nUnit;
        }
        this->_units[this->_nUnit] = obj;
        this->_nUnit += 1;
    }
    return this->_nUnit;
}