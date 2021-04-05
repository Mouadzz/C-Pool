/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:43:20 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 16:08:48 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string _name;
    std::string _title;

public:
    Sorcerer();
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
    std::string get_name();
    std::string get_title();
    void polymorph(Victim const &) const;
};
std::ostream &operator<<(std::ostream &out, Sorcerer &c);

#endif