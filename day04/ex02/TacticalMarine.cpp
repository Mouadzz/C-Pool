/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:49:03 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/09 15:53:55 by mlasrite         ###   ########.fr       */
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

TacticalMarine::TacticalMarine(const TacticalMarine &copie)
{
    *this = copie;
}

ISpaceMarine *TacticalMarine::clone() const
{
    return (ISpaceMarine *)this;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &) { return *this; }

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}
void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}