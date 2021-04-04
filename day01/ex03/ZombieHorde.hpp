/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:18:39 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:18:42 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{
public:
    int nb;
    Zombie **zomb;
    ZombieHorde(int n);
    ~ZombieHorde();
    void announce();
};

#endif