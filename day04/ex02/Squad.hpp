/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:49:33 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/08 14:52:24 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad
{
private:
    int _nUnit;
    ISpaceMarine *_units[30];

public:
    Squad();
    ~Squad();
    Squad &operator=(Squad const &copy);
    virtual int getCount() const;
    virtual ISpaceMarine *getUnit(int) const;
    virtual int push(ISpaceMarine *);
};

#endif