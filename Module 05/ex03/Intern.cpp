#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& obj)
{
    *this = obj;
}

Intern& Intern::operator=(const Intern& obj)
{
    return *this;
}

Intern::~Intern()
{

}

AForm* Intern::makeForm(const std::string& name, const std::string& target)
{
    int type = -1;
    AForm *ptr = NULL;
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
        if (names[i] == name)
            type = i;
    switch (type)
    {
        case 0:
            ptr = new ShrubberyCreationForm(target);
            break;
        case 1:
            ptr = new RobotomyRequestForm(target);
            break;
        case 2:
            ptr = new PresidentialPardonForm(target);
            break;
        default:
            std::cerr << "Error: form doesn't exists\n";
            return NULL;
    }
    std::cout << "Intern creates " << ptr->getName() << std::endl;
    return ptr;
}