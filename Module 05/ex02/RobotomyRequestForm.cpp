#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
    AForm("RobotomyRequestForm", 72, 45), target("DefaultTarget")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string& _target) :
    AForm("RobotomyRequestForm", 72, 45), target(_target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) :
    AForm(obj)
{
    *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if (this == &obj)
        return *this;
    this->target = obj.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    AForm::canExecuteIt(executor);
    std::cout << "Zzzzzzz some drilling noises...\n";
    if (rand() % 2 == 0)
        std::cout << this->target << " has been robotomized successfully 50% of the time\n";
    else
        std::cout << "The robotomy failed\n";
}