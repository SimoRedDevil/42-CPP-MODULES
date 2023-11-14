#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const FragTrap& obj);
        FragTrap(std::string name);
        FragTrap &operator=(const FragTrap &obj);
        ~FragTrap(void);

        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif