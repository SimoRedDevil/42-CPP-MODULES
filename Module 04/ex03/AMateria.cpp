#include "AMateria.hpp"

AMateria::AMateria(std::string const& _type) : type(_type)
{

}

AMateria::AMateria(const AMateria& obj)
{
    *this = obj;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
    (void)obj;
    return *this;
}

AMateria::~AMateria()
{

}

std::string const& AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}