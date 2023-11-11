#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor called\n";
    this->type = "Unknown";
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy constructor called\n";
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal copy assignment operator called\n";
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called\n";
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "Unknown sound\n";
}