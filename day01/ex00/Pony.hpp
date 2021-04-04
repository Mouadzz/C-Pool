/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:00:28 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:00:29 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
private:
    std::string _name;

public:
    Pony(std::string name);
    ~Pony();
    void hello(std::string l);
};

void ponyOnTheStack();
void ponyOnTheHeap();

#endif