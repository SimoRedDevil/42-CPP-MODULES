#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    
}

Cure::Cure(const Cure& obj) : AMateria(obj)
{

}

Cure& Cure::operator=(const Cure& obj)
{
    return *this;
}

Cure::~Cure()
{

}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "Cure: " << "\"* heals " << target.getName() << "s wounds *\"" << std::endl;
}