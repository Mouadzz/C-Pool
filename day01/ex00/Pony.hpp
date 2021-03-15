#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
    private:
        std::string _name;

    public:
        Pony(std::string name) : _name(name)
        {
            std::cout << "Pony " << this->_name << " is born" << std::endl;
        }

        ~Pony()
        {
            std::cout << "Pony " << this->_name << " died" << std::endl;
        }

        void hello(std::string l)
        {
            std::cout << l << std::endl;
        }
};

void ponyOnTheStack();
void ponyOnTheHeap();

#endif