/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:35:48 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 17:07:54 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist();
    ~PowerFist();
    virtual void attack() const;
};

#endif