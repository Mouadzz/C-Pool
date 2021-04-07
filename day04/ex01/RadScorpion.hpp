/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:56:10 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 12:56:37 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
protected:
    std::string _type;
    int _hp;

public:
    RadScorpion();
    ~RadScorpion();
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};

#endif