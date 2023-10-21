#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(void)
{
    /*NOTHING*/
}

const std::string &Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}