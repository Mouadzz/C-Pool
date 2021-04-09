/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:49:59 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/09 15:17:24 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copie)
{
    *this = copie;
}

ISpaceMarine *AssaultTerminator::clone() const
{
    return (ISpaceMarine *)this;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &) { return *this; }

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}
void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}