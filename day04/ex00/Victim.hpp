/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:02:33 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 17:13:44 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim
{
private:
    std::string _name;

public:
    Victim(std::string name);
    ~Victim();
    std::string get_name();
    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim &c);

#endif