/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:39:23 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 12:47:23 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
    std::cout << "Enemy Constructor Called" << std::endl;
}
Enemy::~Enemy() { std::cout << "Enemy Destructor Called" << std::endl; }
std::string Enemy::getType() const { return this->_type; }
int Enemy::getHP() const { return this->_hp; }
void Enemy::takeDamage(int dmg)
{
    if (dmg > 0)
    {
        this->_hp -= dmg;
    }
}