#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    ~NinjaTrap();
    NinjaTrap &operator=(const NinjaTrap &b);
    void ninjaShoebox(NinjaTrap &obj);
    void ninjaShoebox(FragTrap &obj);
    void ninjaShoebox(ScavTrap &obj);
};

#endif