/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:39:23 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/11 14:26:01 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
    this->_hp = hp;
    this->_type = type;
}
Enemy::~Enemy() {}
std::string Enemy::getType() const { return this->_type; }
int Enemy::getHP() const { return this->_hp; }
void Enemy::takeDamage(int dmg)
{
    if (dmg > 0)
    {
        this->_hp -= (dmg - 3);
        if (this->_hp < 0)
            this->_hp = 0;
    }
}

Enemy::Enemy() {}
Enemy::Enemy(Enemy &copy)
{
    this->_hp = copy.getHP();
    this->_type = copy.getType();
}
Enemy &Enemy::operator=(Enemy const &copy)
{
    this->_hp = copy.getHP();
    this->_type = copy.getType();
    return *this;
}