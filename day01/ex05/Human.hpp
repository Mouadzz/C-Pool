/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:30:52 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:30:53 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CPP
#define HUMAN_CPP
#include <iostream>
#include "Brain.hpp"

class Human
{
    private:
        const Brain cerveau;
    public:
        Human();
        ~Human();
        std::string identify() const;
        const Brain& getBrain();
};

#endif