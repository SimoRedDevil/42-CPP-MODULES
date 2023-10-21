#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook myPhoneBook;
    std::string line;
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "|        --> Welcome to your awesome phonebook <--         |" << std::endl << std::endl;
    std::cout << "| You have 3 possible commands to do: ADD - SEARCH - EXIT  |" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    while (1)
    {
        std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
        std::getline(std::cin, line);
        if (line == "ADD")
            myPhoneBook.addContact();
        else if (line == "SEARCH")
            myPhoneBook.search();
        else if (line == "EXIT")
            myPhoneBook.exitProgram();
        else
            exit(EXIT_FAILURE);
    }
    return (0);
}