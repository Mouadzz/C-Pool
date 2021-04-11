/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:59:05 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/11 14:24:37 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _ap(40)
{
    this->_name = name;
    this->_weapon = NULL;
}
Character::~Character() {}
void Character::recoverAP()
{
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}
void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}
void Character::attack(Enemy *enemy)
{
    if (this->_weapon && enemy && enemy->getHP() > 0)
    {
        if (this->_ap >= this->_weapon->getAPCost())
        {
            this->_ap -= this->_weapon->getAPCost();
            if (this->_ap < 0)
                this->_ap = 0;
            std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
            this->_weapon->attack();
            enemy->takeDamage(this->_weapon->getDamage());
            if (enemy->getHP() <= 0)
            {
                delete enemy;
                enemy = NULL;
            }
        }
        else
            std::cout << "No more AP left!" << std::endl;
    }
    else
    {
        std::cout << "Enemy already dead!" << std::endl;
    }
}

std::string Character::getName() const { return this->_name; }
int Character::getAp() const { return this->_ap; }
AWeapon *Character::getWeaponPtr() const { return this->_weapon; }

std::ostream &operator<<(std::ostream &out, const Character &c)
{
    if (c.getWeaponPtr())
        out << c.getName() << " has " << c.getAp() << " AP and wields a " << c.getWeaponPtr()->getName() << std::endl;
    else
        out << c.getName() << " has " << c.getAp() << " AP and is unarmed" << std::endl;
    return out;
}

Character::Character() {}
Character::Character(Character &copy)
{
    this->_name = copy.getName();
    this->_ap = copy.getAp();
    this->_weapon = copy.getWeaponPtr();
}
Character &Character::operator=(Character const &copy)
{
    this->_name = copy.getName();
    this->_ap = copy.getAp();
    this->_weapon = copy.getWeaponPtr();
    return *this;
}