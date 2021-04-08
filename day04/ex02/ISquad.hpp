/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:51:07 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/08 14:34:46 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP
#include "ISpaceMarine.hpp"

class ISquad
{
public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine *getUnit(int) const = 0;
    virtual int push(ISpaceMarine *) = 0;
};

#endif