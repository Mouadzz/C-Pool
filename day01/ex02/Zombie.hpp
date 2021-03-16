#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private:
        std::string _name;
        std::string _type;

    public:
        Zombie(std::string name, std::string type)
        {
            this->_name = name;
            this->_type = type;
        }
        // ~Zombie();
        void announce() const;
};

#endif