/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:18:16 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:18:28 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce() const
{
    std::cout << "- " << this->_name << "(" << this->_type << ")"
              << " Braiiiiiiiiiiiiiinnnnssss ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "One Shot" << std::endl;
}

void Zombie::set_zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}

Zombie::Zombie() {}