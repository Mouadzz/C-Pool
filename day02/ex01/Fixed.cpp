/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:59:21 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/05 12:18:17 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedvalue = 0;
    this->isfloat = false;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copie)
{
    std::cout << "Copy constructor called" << std::endl;
    std::cout << "Assignation operator called" << std::endl;
    this->fixedvalue = copie.fixedvalue;
    this->isfloat = copie.isfloat;
    this->getRawBits(); 
}

Fixed &Fixed::operator=(const Fixed &b)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixedvalue = b.fixedvalue;
    this->isfloat = b.isfloat;
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->fixedvalue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedvalue = raw;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    this->isfloat = false;
    this->fixedvalue = val;
}
Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    this->isfloat = true;
    this->fixedvalue = roundf(val * pow(2, this->nbits));
}
float Fixed::toFloat(void) const
{
    return (isfloat == true) ? float(this->fixedvalue / pow(2, this->nbits)) : this->fixedvalue;
}

int Fixed::toInt(void) const
{
    return this->toFloat();
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}
