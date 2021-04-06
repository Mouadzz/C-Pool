/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:54:09 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/06 18:01:04 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
protected:
    std::string _name;
    int _damage;
    int _apcost;

public:
    PlasmaRifle(std::string const &name, int apcost, int damage);
    ~PlasmaRifle();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif