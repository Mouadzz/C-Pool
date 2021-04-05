/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:54:34 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 11:55:05 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int fixedvalue;
    static const int nbits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(Fixed &copie);
    Fixed &operator=(const Fixed &b);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif