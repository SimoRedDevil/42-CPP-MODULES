#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor called\n";
    this->type = "Dog";
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "Dog copy constructor called\n";
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog copy assignment operator called\n";
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound(void) const
{
    std::cout << "Bark Bark\n";
}