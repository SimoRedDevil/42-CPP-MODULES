#pragma once
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string name;
        bool is_signed;
        int gradeSign;
        int gradeExecute;
    public:
        Form();
        Form(const std::string& _name, int _gradeSign, int _gradeExecute);
        Form(const Form& obj);
        Form& operator=(const Form& obj);
        ~Form();
        const std::string& getName() const;
        bool getFormStatus() const;
        int getGradeSign() const;
        int getGradeExecute() const;
        void beSigned(const Bureaucrat& obj);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class FormAlreadySignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif