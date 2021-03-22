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