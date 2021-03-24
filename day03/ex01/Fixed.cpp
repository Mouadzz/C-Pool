#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedvalue = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copie)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedvalue = copie.fixedvalue;
    this->getRawBits();
}

Fixed &Fixed::operator=(const Fixed &b)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixedvalue = b.fixedvalue;
    this->getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedvalue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedvalue = raw;
}

Fixed::Fixed(const int val)
{
    this->fixedvalue = round(val * (1 << this->nbits));
}
Fixed::Fixed(const float val)
{
    this->fixedvalue = round(val * (1 << this->nbits));
}
float Fixed::toFloat(void) const
{
    return ((float)this->fixedvalue) / (1 << this->nbits);
}
int Fixed::toInt(void) const
{
    return ((int)this->fixedvalue) / (1 << this->nbits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
    out << c.getRawBits();
    return out;
}