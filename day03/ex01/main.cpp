/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:14:13 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 15:18:01 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    srand(time(0));
    ScavTrap Scav1;
    ScavTrap Scav2("Naruto");
    Scav1.rangedAttack(Scav2.getName());
    Scav2.meleeAttack(Scav1.getName());
    Scav1.takeDamage(75);
    Scav2.takeDamage(85);
    std::cout << "HP: " << Scav1.getHitPoints() << "\nEP: " << Scav1.getEnergyPoints() << std::endl;
    std::cout << "HP: " << Scav2.getHitPoints() << "\nEP: " << Scav2.getEnergyPoints() << std::endl;
    Scav1.beRepaired(50);
    Scav2.beRepaired(55);
    std::cout << "HP: " << Scav1.getHitPoints() << "\nEP: " << Scav1.getEnergyPoints() << std::endl;
    std::cout << "HP: " << Scav2.getHitPoints() << "\nEP: " << Scav2.getEnergyPoints() << std::endl;
    Scav1.challengeNewcomer(Scav2.getName());
}