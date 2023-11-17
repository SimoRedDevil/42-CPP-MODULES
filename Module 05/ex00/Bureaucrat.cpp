#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Mohamed"), grade(1)
{

}

Bureaucrat::Bureaucrat(const std::string& _name, int _grade) : name(_name)
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    else
        this->grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    *this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if (this == &obj)
        return *this;
    this->name = obj.name;
    this->grade = obj.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}

const std::string& Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    else
        this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    else
        this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}