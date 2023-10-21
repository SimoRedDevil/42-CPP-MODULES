#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB(void)
{
    /*NOTHING*/
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponB = &weapon;
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their "
        << weaponB->getType() << std::endl;
}