/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:48:46 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 12:50:53 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
protected:
    std::string _type;
    int _hp;

public:
    SuperMutant();
    ~SuperMutant();
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};

#endif