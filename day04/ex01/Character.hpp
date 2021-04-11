/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:59:02 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/11 14:23:00 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    std::string _name;
    int _ap;
    AWeapon *_weapon;

public:
    Character(std::string const &name);
    ~Character();
    Character();
    Character(Character &copy);
    Character &operator=(Character const &copy);
    void recoverAP();
    void equip(AWeapon *);
    void attack(Enemy *);
    std::string getName() const;
    int getAp() const;
    AWeapon *getWeaponPtr() const;
};

std::ostream &operator<<(std::ostream &out, const Character &c);

#endif