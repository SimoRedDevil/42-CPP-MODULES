#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Cat Kermit;
    Dog Leo;

    std::cout << "Kermit's brain: " << Kermit.getBrain() << std::endl;
    std::cout << "Leo's brain: " << Leo.getBrain() << std::endl;
    return 0;
}