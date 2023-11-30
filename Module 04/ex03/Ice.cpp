#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice& obj) : AMateria(obj)
{

}

Ice& Ice::operator=(const Ice& obj)
{
    return *this;
}

Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "Ice: " << "\"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}