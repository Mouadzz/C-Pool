/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:59:05 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 15:17:14 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _ap(40)
{
    std::cout << "Character Constructor Called" << std::endl;
}
Character::~Character() { std::cout << "Character Destructor Called" << std::endl; }
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
    if (this->_weapon)
    {
        std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
        enemy->takeDamage(this->_weapon->getDamage());
        if (enemy->getHP() <= 0)
        {
            std::cout << "Enemy must be deleted! " << std::endl;
        }
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