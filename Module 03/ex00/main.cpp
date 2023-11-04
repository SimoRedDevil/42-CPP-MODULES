#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap hamza("Hamza Oumansour");
    ClapTrap naima("Naima El Baz");

    hamza.attack(naima.getName());
    naima.takeDamage(0);
    naima.beRepaired(10);
    naima.attack(hamza.getName());
    hamza.takeDamage(0);
    hamza.beRepaired(5);
    return 0;
}