/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:30:47 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:30:48 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify() const
{
    return this->cerveau.identify();
}

const Brain& Human::getBrain()
{
    return this->cerveau;
}

Human::Human() {}
Human::~Human() {}