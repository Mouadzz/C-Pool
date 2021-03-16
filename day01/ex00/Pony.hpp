#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
private:
    std::string _name;

public:
    Pony(std::string name);
    ~Pony();
    void hello(std::string l);
};

void ponyOnTheStack();
void ponyOnTheHeap();

#endif