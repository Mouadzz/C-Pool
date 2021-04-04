/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:34:24 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:35:26 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
#define HUMANA_CPP
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon& _weapon;
    std::string _name;

public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack();
};

#endif