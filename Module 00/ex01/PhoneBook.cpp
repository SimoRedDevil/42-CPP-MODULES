#include "PhoneBook.hpp"

static bool isEmptyLine(std::string line)
{
    int i = 0;
    if (line.empty() == true)
        return (true);
    while (i < line.length() && std::isspace(line.at(i)))
        i++;
    if (i == line.length())
        return (true);
    return (false);
}

static void printStrFormat(std::string str)
{
    int j = 0;
    for (j; j < str.length(); j++)
    {
        if (j >= 10)
        {
            std::cout << ".";
            return ;
        }
        std::cout << (char)str.at(j);
    }
    while (j <= 10)
    {
        std::cout << " ";
        j++;
    }
}

PhoneBook::PhoneBook()
{
    this->contactsCounter = 0;
}

PhoneBook::~PhoneBook()
{
    /*NOTHING*/
}

void PhoneBook::printContacts()
{
    std::cout << "Index     | First Name | Last Name  | Nick Name" << std::endl;
    for (int i = 0; i < this->contactsCounter; i++)
    {
        std::cout << this->contacts[i].getIndex() + 1 << "         | ";
        printStrFormat(this->contacts[i].getFirstName());
        std::cout << "| ";
        printStrFormat(this->contacts[i].getLastName());
        std::cout << "| ";
        printStrFormat(this->contacts[i].getNickName());
        std::cout << std::endl;
    }
}

void PhoneBook::addContact()
{
    static int i;
    int j = 0;
    std::string line;

    if (i > 7)
        i = 7;
    while (j < 5)
    {
        switch (j)
        {
            case 0:
                std::cout << "First Name: ";
                std::getline(std::cin, line);
                if (isEmptyLine(line) == true)
                    std::exit(1);
                this->contacts[i].setFirstName(line);
                break;
            case 1:
                std::cout << "Last Name: ";
                std::getline(std::cin, line);
                if (isEmptyLine(line) == true)
                    std::exit(1);
                this->contacts[i].setLastName(line);
                break;
            case 2:
                std::cout << "Nick Name: ";
                std::getline(std::cin, line);
                if (isEmptyLine(line) == true)
                    std::exit(1);
                this->contacts[i].setNickName(line);
                break;
            case 3:
                std::cout << "Phone Number: ";
                std::getline(std::cin, line);
                if (isEmptyLine(line) == true)
                    std::exit(1);
                this->contacts[i].setPhoneNumber(line);
                break;
            case 4:
                std::cout << "Drakest Secret: ";
                std::getline(std::cin, line);
                if (isEmptyLine(line) == true)
                    std::exit(1);
                this->contacts[i].setDarkestSecret(line);
                break;
        }
        j++;
    }
    this->contacts[i].setIndex(i);
    i++;
    this->contactsCounter = i;
}

void PhoneBook::searchContact()
{
    std::string str;
    int index;
    printContacts();
    if (this->contactsCounter == 0)
        return ;
    HERE:
    std::cout << "Enter the contact index: ";
    std::getline(std::cin, str);
    index = std::atoi(str.c_str());
    if (index <= 0 || index > this->contactsCounter)
    {
        std::cerr << "Index out of range" << std::endl;
        goto HERE ;
    }
    index--;
    std::cout << std::endl;
    std::cout << "First Name: " << this->contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << this->contacts[index].getLastName() << std::endl;
    std::cout << "Nick Name: " << this->contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << this->contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << this->contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::exit()
{
    std::exit(EXIT_SUCCESS);
}