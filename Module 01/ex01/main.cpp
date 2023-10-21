#include "Zombie.hpp"

int main(void)
{
    int nb = 4;
    Zombie *zombies = zombieHorde(nb, "Monster");
    for (int i = 0; i < nb; i++)
        zombies[i].announce();
    delete[] zombies;
}