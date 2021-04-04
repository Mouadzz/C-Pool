/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:18:10 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:18:29 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
    std::string _name;
    std::string _type;

public:
    Zombie();
    ~Zombie();
    void announce() const;
    void set_zombie(std::string name, std::string type);
};

#endif