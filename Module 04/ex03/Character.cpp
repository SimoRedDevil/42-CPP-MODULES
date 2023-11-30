#include "Character.hpp"

Character::Character(const std::string& _name) : name(_name)
{
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;
}

Character::Character(const Character& obj)
{
    *this = obj;
}

Character& Character::operator=(const Character& obj)
{
    if (this == &obj)
        return *this;
    this->name = obj.name;
    for (int i = 0; i < 4; i++)
        if (this->slot[i])
            delete this->slot[i];
    for (int i = 0; i < 4; i++)
    {
        if (obj.slot[i])
            this->slot[i] = obj.slot[i]->clone();
        else
            this->slot[i] = NULL;
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->slot[i])
            delete this->slot[i];
}

std::string const& Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->slot[i])
        {
            this->slot[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !this->slot[idx])
        return;
    AMateria *tmp = this->slot[idx];
    this->slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !this->slot[idx])
        return;
    this->slot[idx]->use(target);
}