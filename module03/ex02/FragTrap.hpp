#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string _name);
        FragTrap(const FragTrap &New);
        FragTrap & operator=(const FragTrap &rhs);
        void highFivesGuys(void);
        ~FragTrap();
};

#endif