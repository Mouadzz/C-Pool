/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:52:53 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/09 16:24:09 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;
    ISquad *vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << std::endl;
    ISpaceMarine *clone = vlc->getUnit(0)->clone();
    clone->rangedAttack();
    clone = vlc->getUnit(1)->clone();
    clone->rangedAttack();
    std::cout << std::endl;

    
    delete vlc;
    return 0;
}