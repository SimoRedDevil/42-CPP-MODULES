#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat Hazem("Hazem", 4);
        Hazem.incrementGrade();
        std::cout << Hazem << std::endl;
        Hazem.decrementGrade();
        std::cout << Hazem << std::endl;

        Bureaucrat Ahmed("Ahmed", 150);
        Ahmed.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}