#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    Bureaucrat John("John", 30);
    Bureaucrat Wilfried("Wilfried", 3);
    ShrubberyCreationForm Shrubbery("home");
    RobotomyRequestForm Robotomy("ahmed");
    PresidentialPardonForm Presidential("criminal");

    John.signForm(Shrubbery);
    John.signForm(Robotomy);
    John.executeForm(Shrubbery);
    John.executeForm(Robotomy);

    Wilfried.signForm(Presidential);
    Wilfried.executeForm(Presidential);
    return 0;
}