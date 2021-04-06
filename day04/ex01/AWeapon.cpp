#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
    std::cout << "Constructor Called" << std::endl;
}
AWeapon::~AWeapon() { std::cout << "Destructor Called" << std::endl; }
std::string AWeapon::getName() const { return this->_name; }
int AWeapon::getAPCost() const { return this->_apcost; }
int AWeapon::getDamage() const { return this->_damage; }
void AWeapon::attack() const {}