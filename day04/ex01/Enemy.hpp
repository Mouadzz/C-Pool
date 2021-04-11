/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:39:27 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/11 14:25:16 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy
{
protected:
    std::string _type;
    int _hp;

public:
    Enemy(int hp, std::string const &type);
    virtual ~Enemy();
    Enemy();
    Enemy(Enemy &copy);
    Enemy &operator=(Enemy const &copy);
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};

#endif