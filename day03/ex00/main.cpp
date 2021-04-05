/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:05:36 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 15:10:51 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    srand(time(0));
    FragTrap inst("Naruto");
    inst.rangedAttack("Konoha");
    inst.meleeAttack("pain");
    inst.takeDamage(1000);
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    inst.beRepaired(15);
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    inst.vaulthunter_dot_exe("Akatsuki");
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    inst.vaulthunter_dot_exe("Akatsuki");
    std::cout << "HP: " << inst.getHitPoints() << "\nEP: " << inst.getEnergyPoints() << std::endl;
    return 0;
}