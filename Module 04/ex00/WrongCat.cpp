#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat default constructor called\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat copy constructor called\n";
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat copy assignment operator called\n";
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow Meow\n";
}