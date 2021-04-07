/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:35:48 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 12:38:20 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
protected:
    std::string _name;
    int _damage;
    int _apcost;

public:
    PowerFist();
    ~PowerFist();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif