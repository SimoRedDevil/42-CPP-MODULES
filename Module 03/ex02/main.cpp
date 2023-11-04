#include "FragTrap.hpp"

int main(void)
{
    ScavTrap Mohamed("Mohamed");
    FragTrap Hamza("Hamza");
    Mohamed.attack(Hamza.getName());
    Hamza.takeDamage(20);
    Hamza.beRepaired(10);
    Hamza.attack(Mohamed.getName());
    Mohamed.takeDamage(30);
    Mohamed.beRepaired(20);
    Hamza.highFivesGuys();
    return 0;
}