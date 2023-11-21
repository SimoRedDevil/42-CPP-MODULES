#pragma once
#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class AForm
{
    private:
        std::string name;
        bool is_signed;
        int gradeSign;
        int gradeExecute;
    public:
        AForm();
        AForm(const std::string& _name, int _gradeSign, int _gradeExecute);
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        ~AForm();
        const std::string& getName() const;
        bool getFormStatus() const;
        int getGradeSign() const;
        int getGradeExecute() const;
        void beSigned(const Bureaucrat& obj);
        virtual void execute(const Bureaucrat& executor) const = 0;
        void canExecuteIt(const Bureaucrat& obj) const;

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
        class FormIsNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif