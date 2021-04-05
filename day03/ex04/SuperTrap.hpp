/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:37:51 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 15:37:52 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap
{
public:
    SuperTrap();
    SuperTrap(std::string name);
    ~SuperTrap();
    SuperTrap &operator=(const SuperTrap &b);
};

#endif