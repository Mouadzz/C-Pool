/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:13:26 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:13:26 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include  <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string _type;
    public:
        void setZombieType(std::string type);
        Zombie* newZombie (std::string name);
};

void randomChump(ZombieEvent &instance);

#endif