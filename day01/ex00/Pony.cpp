#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony jax = Pony("Jaxed");
    jax.hello("Jax from the Stack !");
}

void ponyOnTheHeap()
{
    Pony* zed = new Pony("Zeded");
    zed->hello("Zed from the Heap !");
    delete zed;
}
