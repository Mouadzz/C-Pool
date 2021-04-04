/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:10:02 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:10:04 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    srand(time(0));
    ZombieEvent instance;
    instance.setZombieType("Mid");
    randomChump(instance);
    randomChump(instance);
    randomChump(instance);
    return 0;
}