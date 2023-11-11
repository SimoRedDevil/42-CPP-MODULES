#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Dog bob;
    Dog alex(bob);
    std::cout << "BOB BRAIN'S: " << bob.getBrain() << std::endl;
    std::cout << "ALEX BRAIN'S: " << alex.getBrain() << std::endl;
    return 0;
}