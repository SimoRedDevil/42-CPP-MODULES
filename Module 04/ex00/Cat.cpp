#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat default constructor called\n";
    this->type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    std::cout << "Cat copy constructor called\n";
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat copy assignment operator called\n";
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow\n";
}