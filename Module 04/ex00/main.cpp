#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    const WrongAnimal* ani = new WrongAnimal();
    const WrongAnimal* kermit = new WrongCat();
    std::cout << kermit->getType() << " " << std::endl;
    kermit->makeSound();
    ani->makeSound();
    delete ani;
    delete kermit;
    return 0;
}