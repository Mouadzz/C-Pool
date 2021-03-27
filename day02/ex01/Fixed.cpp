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
    this->fixedvalue = copie.fixedvalue;
    this->isfloat = copie.isfloat;
    this->getRawBits();
}

Fixed &Fixed::operator=(const Fixed &b)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixedvalue = b.fixedvalue;
    this->isfloat = b.isfloat;
    this->getRawBits();
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
    this->isfloat = false;
    this->fixedvalue = val;
}
Fixed::Fixed(const float val)
{
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
