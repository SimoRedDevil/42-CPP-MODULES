#include "AForm.hpp"

AForm::AForm() : name("DefaultForm"), is_signed(false), gradeSign(1), gradeExecute(1)
{

}

AForm::AForm(const std::string& _name, int _gradeSign, int _gradeExecute) :
    name(_name), is_signed(false)
{
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
    if (_gradeSign > 150 || _gradeExecute > 150)
        throw GradeTooLowException();
    this->gradeSign = _gradeSign;
    this->gradeExecute = _gradeExecute;
}

AForm::AForm(const AForm& obj)
{
    *this = obj;
}

AForm& AForm::operator=(const AForm& obj)
{
    if (this == &obj)
        return *this;
    this->name = obj.name;
    this->gradeSign = obj.gradeSign;
    this->gradeExecute = obj.gradeExecute;
    this->is_signed = obj.is_signed;
    return *this;
}

AForm::~AForm()
{

}

const std::string& AForm::getName() const
{
    return this->name;
}

bool AForm::getFormStatus() const
{
    return this->is_signed;
}

int AForm::getGradeSign() const
{
    return this->gradeSign;
}

int AForm::getGradeExecute() const
{
    return this->gradeExecute;
}

void AForm::beSigned(const Bureaucrat& obj)
{
    if (this->is_signed)
        throw FormAlreadySignedException();
    if (obj.getGrade() > this->gradeSign)
        throw GradeTooLowException();
    this->is_signed = true;
}

void AForm::canExecuteIt(const Bureaucrat& obj) const
{
    if (!this->getFormStatus())
        throw FormIsNotSignedException();
    if (this->getGradeExecute() < obj.getGrade())
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* AForm::FormAlreadySignedException::what() const throw()
{
    return "Form already signed";
}

const char* AForm::FormIsNotSignedException::what() const throw()
{
    return "Form is not signed";
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
    os << obj.getName() << ", is signed: "
        << obj.getFormStatus() << ", grade sign: "
        << obj.getGradeSign() << ", grade execute: " << obj.getGradeExecute();
    return os;
}