#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap Clap("John");
    ScavTrap Scav("Mikel");
    Clap.attack(Scav.getName());
    Scav.takeDamage(0);
    Scav.beRepaired(10);
    Scav.attack(Clap.getName());
    Clap.takeDamage(20);
    Clap.beRepaired(15);
    return 0;
}