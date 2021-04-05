/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:59:24 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 12:04:52 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixedvalue;
    static const int nbits = 8;
    bool isfloat;

public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &copie);
    Fixed &operator=(const Fixed &b);
    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed(const int val);
    Fixed(const float val);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif