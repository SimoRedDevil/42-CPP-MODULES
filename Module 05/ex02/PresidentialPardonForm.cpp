#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
    AForm("PresidentialPardonForm", 25, 5), target("DefaultTarget")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string& _target) :
    AForm("PresidentialPardonForm", 25, 5), target(_target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) :
    AForm(obj)
{
    *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this == &obj)
        return *this;
    this->target = obj.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    AForm::canExecuteIt(executor);
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
}