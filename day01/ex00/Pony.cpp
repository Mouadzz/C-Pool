#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony jax = Pony("Jaxed");
    jax.hello("Jax from the Stack !");
}

void ponyOnTheHeap()
{
    Pony *zed = new Pony("Zeded");
    zed->hello("Zed from the Heap !");
    delete zed;
}

Pony::Pony(std::string name) : _name(name)
{
    std::cout << "Pony " << this->_name << " is born" << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony " << this->_name << " died" << std::endl;
}

void Pony::hello(std::string l)
{
    std::cout << l << std::endl;
}
