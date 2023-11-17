#include "Form.hpp"

Form::Form() : name("DefaultForm"), is_signed(false), gradeSign(1), gradeExecute(1)
{

}

Form::Form(const std::string& _name, int _gradeSign, int _gradeExecute) :
    name(_name), is_signed(false)
{
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
    if (_gradeSign > 150 || _gradeExecute > 150)
        throw GradeTooLowException();
    this->gradeSign = _gradeSign;
    this->gradeExecute = _gradeExecute;
}

Form::Form(const Form& obj)
{
    *this = obj;
}

Form& Form::operator=(const Form& obj)
{
    if (this == &obj)
        return *this;
    this->name = obj.name;
    this->gradeSign = obj.gradeSign;
    this->gradeExecute = obj.gradeExecute;
    this->is_signed = obj.is_signed;
    return *this;
}

Form::~Form()
{

}

const std::string& Form::getName() const
{
    return this->name;
}

bool Form::getFormStatus() const
{
    return this->is_signed;
}

int Form::getGradeSign() const
{
    return this->gradeSign;
}

int Form::getGradeExecute() const
{
    return this->gradeExecute;
}

void Form::beSigned(const Bureaucrat& obj)
{
    if (this->is_signed)
        throw FormAlreadySignedException();
    if (obj.getGrade() > this->gradeSign)
        throw GradeTooLowException();
    this->is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* Form::FormAlreadySignedException::what() const throw()
{
    return "Form already signed";
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    os << obj.getName() << ", is signed: "
        << obj.getFormStatus() << ", grade sign: "
        << obj.getGradeSign() << ", grade execute: " << obj.getGradeExecute();
    return os;
}