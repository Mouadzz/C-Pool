#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage), _name(name), _apcost(apcost), _damage(damage)
{
    std::cout << "Constructor Called" << std::endl;
}
PlasmaRifle::~PlasmaRifle() { std::cout << "Destructor Called" << std::endl; }
std::string PlasmaRifle::getName() const { return this->_name; }
int PlasmaRifle::getAPCost() const { return this->_apcost; }
int PlasmaRifle::getDamage() const { return this->_damage; }
void PlasmaRifle::attack() const {}