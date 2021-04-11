/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:49:30 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/11 14:22:26 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon
{
protected:
    std::string _name;
    int _damage;
    int _apcost;

public:
    AWeapon(std::string const &name, int apcost, int damage);
    AWeapon();
    AWeapon(AWeapon &copy);
    AWeapon &operator=(AWeapon const &copy);
    virtual ~AWeapon();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif