/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:13:20 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:13:22 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *zomb = new Zombie(name, this->_type);
    return zomb;
}

void randomChump(ZombieEvent &instance)
{
    std::string names[] = {"LeBlanc", "Zed", "Lucian", "Cassiopia", "Oriana", "Ryze", "Ekko"};
    int result = std::rand() % 7;
    Zombie *zomb = instance.newZombie(names[result]);
    zomb->announce();
    delete zomb;
}