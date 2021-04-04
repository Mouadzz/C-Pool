/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:19:00 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:24:54 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    this->nb = n;
    std::string names[] = {"LeBlanc", "Zed", "Lucian", "Cassiopia", "Oriana", "Ryze", "Ekko"};
    std::string types[] = {"Mid", "Jungle", "Support", "Bottom", "Top"};

    this->zomb = new Zombie *[n];
    for (int i = 0; i < n; i++)
    {
        int randname = std::rand() % 7;
        int randtype = std::rand() % 5;
        this->zomb[i] = new Zombie;
        this->zomb[i]->set_zombie(names[randname], types[randtype]);
    }
}

void ZombieHorde::announce()
{
    for (int i = 0; i < this->nb; i++)
        this->zomb[i]->announce();
}

ZombieHorde::~ZombieHorde()
{
    for (int i = 0; i < this->nb; i++)
        delete this->zomb[i];
    delete this->zomb;
}