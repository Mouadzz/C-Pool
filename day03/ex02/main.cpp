/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:19:58 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 15:24:49 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    FragTrap inst("Itachi");
    inst.rangedAttack("Konoha");
    inst.meleeAttack("pain");
    inst.takeDamage(50);
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    inst.beRepaired(15);
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    inst.vaulthunter_dot_exe("Akatsuki");
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    inst.vaulthunter_dot_exe("Akatsuki");
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    return 0;
}