#ifndef HUMAN_CPP
#define HUMAN_CPP
#include <iostream>
#include "Brain.hpp"

class Human
{
    private:
        const Brain cerveau;
    public:
        Human();
        ~Human();
        std::string identify() const;
        const Brain& getBrain();
};

#endif