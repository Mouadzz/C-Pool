/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:49:03 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/08 14:57:56 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}
TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const
{
    ISpaceMarine *a;
    return a;
}
void TacticalMarine::battleCry() const
{
    std::cout << " holy PLOT!" << std::endl;
}
void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}