/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:30:19 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:30:39 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

std::string Brain::identify() const
{
    std::stringstream sstream;
    sstream << this;
    return sstream.str();
}

Brain::Brain() {}

Brain::~Brain() {}