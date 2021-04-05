/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:13:13 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 17:09:39 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
private:
    std::string _name;

public:
    Peon(std::string name);
    ~Peon();
    void getPolymorphed() const;
    std::string get_name();
};

std::ostream &operator<<(std::ostream &out, Peon &c);

#endif