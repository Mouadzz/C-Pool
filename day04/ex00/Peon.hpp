/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:13:13 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/11 14:57:51 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(std::string name);
    Peon(Peon &copy);
    Peon();
    Peon &operator=(Peon &copy);
    ~Peon();
    void getPolymorphed() const;
    std::string get_name();
};

class Pig : public Victim
{
public:
    Pig(std::string name);
    Pig(Pig &copy);
    Pig();
    Pig &operator=(Pig &copy);
    ~Pig();
    void getPolymorphed() const;
    std::string get_name();
};

std::ostream &operator<<(std::ostream &out, Peon &c);
std::ostream &operator<<(std::ostream &out, Pig &c);

#endif