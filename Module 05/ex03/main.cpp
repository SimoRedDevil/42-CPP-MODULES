#include "Intern.hpp"

int main(void)
{
    try
    {
        Bureaucrat Simo("Simo", 2);
        Intern i1;
        AForm *form1 = i1.makeForm("robotomy request", "Bender");
        Simo.signForm(*form1);
        Simo.executeForm(*form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}