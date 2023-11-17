#include "Form.hpp"

int main(void)
{
    Bureaucrat John("John", 3);
    Form Form1("Form1", 5, 3);
    std::cout << John << std::endl;
    std::cout << Form1 << std::endl;
    John.signForm(Form1);

    Form Form2("Form2", 1, 1);
    John.signForm(Form2);
    return 0;
}