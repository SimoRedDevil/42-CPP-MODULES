#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    counter = 0;
}

PhoneBook::~PhoneBook(void)
{
    /*NOTHING*/
}

void PhoneBook::addContact(void)
{
    if (counter > 7)
        counter = 7;
    std::string str[5] =
    {
        "First Name: ",
        "Last Name: ",
        "Nick Name: ",
        "Phone Number: ",
        "Darkest Secret: "
    };
    std::string input[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << str[i];
        std::getline(std::cin, input[i]);
        if (std::cin.eof())
            exitProgram();
        if (input[i].empty())
        {
            std::cout << "Contact cannot have empty field\n";
            i--;
            continue;
        }
    }
    contacts[counter].setContactIndex(counter);
    contacts[counter].setFirstName(input[0]);
    contacts[counter].setLastName(input[1]);
    contacts[counter].setNickName(input[2]);
    contacts[counter].setPhoneNumber(input[3]);
    contacts[counter].setDarkestSecret(input[4]);
    counter++;
}

static std::string substring(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void PhoneBook::showContacts(void)
{
    for (int i = 0; i < counter; i++)
    {
        std::cout << i + 1 << std::setw(10) << "|"
            << substring(contacts[i].getFirstName())
            << std::setw(11 - contacts[i].getFirstName().length())
            << "|" << substring(contacts[i].getLastName())
            << std::setw(11 - contacts[i].getLastName().length())
            << "|" << substring(contacts[i].getNickName()) << std::endl;
    }
}

void PhoneBook::search(void)
{
    showContacts();
    std::string index;
    std::cout << "Enter the index: ";
    std::getline(std::cin, index);
    if (std::cin.eof())
        exitProgram();
    int i = atoi(index.c_str());
    if (i <= 0 || i > 8)
    {
        std::cout << "Error: index out of range\n";
        return;
    }
    i--;
    std::cout << std::endl;
    std::cout << "First Name: " << contacts[i].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
    std::cout << "Nick Name: " << contacts[i].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[i].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << std::endl;
}

void PhoneBook::exitProgram(void)
{
    exit(EXIT_SUCCESS);
}