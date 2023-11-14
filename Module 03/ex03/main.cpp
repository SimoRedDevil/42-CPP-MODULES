#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap Jack("Jack");
    Jack.attack("John");
    Jack.takeDamage(10);
    Jack.beRepaired(20);
    Jack.guardGate();
    Jack.highFivesGuys();
    Jack.whoAmI();
    return 0;
}