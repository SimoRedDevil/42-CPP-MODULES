#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weaponA(weapon)
{
    this->name = name;
}

HumanA::~HumanA(void)
{
    /*NOTHING*/
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their "
        << weaponA.getType() << std::endl;
}