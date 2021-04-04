/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:11:16 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:13:04 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void Zombie::announce() const
{
    std::cout << "- " << this->_name << "(" << this->_type << ")"
              << " Braiiiiiiiiiiiiiinnnnssss ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "One Shot" << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}