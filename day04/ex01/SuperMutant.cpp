/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:48:47 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/11 14:30:27 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() { std::cout << "Aaargh..." << std::endl; }

SuperMutant::SuperMutant(SuperMutant &copy)
{
    *this = copy;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &)
{
    return *this;
}