#include "Brain.hpp"

Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Idea";
    std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain& obj)
{
    std::cout << "Brain copy constructor called\n";
    *this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "Brain copy assignment operator called\n";
    if (this == &obj)
        return *this;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called\n";
}