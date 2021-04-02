#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap
{
public:
    SuperTrap();
    SuperTrap(std::string name);
    ~SuperTrap();
    SuperTrap &operator=(const SuperTrap &b);
};

#endif