/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:30:39 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 15:30:41 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    srand(time(0));
    ScavTrap Scav1;
    ScavTrap Scav2("Naruto");

    Scav1.rangedAttack(Scav2.getName());
    Scav2.meleeAttack(Scav1.getName());
    Scav1.takeDamage(20);
    Scav2.beRepaired(50);
    Scav1.challengeNewcomer(Scav2.getName());

    FragTrap frag("Itachi");
    frag.rangedAttack("Konoha");
    frag.meleeAttack("pain");
    frag.takeDamage(50);
    std::cout << "HP: " << frag.getHitPoints() << "\nEP: " << frag.getEnergyPoints() << std::endl;
    frag.beRepaired(15);
    std::cout << "HP: " << frag.getHitPoints() << "\nEP: " << frag.getEnergyPoints() << std::endl;
    frag.vaulthunter_dot_exe("Akatsuki");
    std::cout << "HP: " << frag.getHitPoints() << "\nEP: " << frag.getEnergyPoints() << std::endl;
    frag.vaulthunter_dot_exe("Akatsuki");
    std::cout << "HP: " << frag.getHitPoints() << "\nEP: " << frag.getEnergyPoints() << std::endl;

    NinjaTrap ninja("Kakashi");

    ninja.ninjaShoebox(Scav1);
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(ninja);

    return 0;
}