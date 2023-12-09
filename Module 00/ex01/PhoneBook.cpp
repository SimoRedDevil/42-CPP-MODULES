/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:54:49 by mel-yous          #+#    #+#             */
/*   Updated: 2023/12/08 15:27:20 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    contactsCounter = 0;
}

PhoneBook::~PhoneBook(void)
{

}

static bool isEmptyLine(const std::string& str)
{
    size_t i = 0;
    while (i < str.length())
    {
        if (str[i] != 9 && str[i] != 32)
            return false;
        i++;
    }
    return true;
}

void PhoneBook::addContact(void)
{
    static int index = 0;
    std::string str[5] = {"First Name: ", "Last Name: ", "Nick Name: ", "Phone Number: ", "Darkest Secret: "};
    std::string input[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << str[i];
        std::getline(std::cin, input[i]);
        if (std::cin.eof())
            exitProgram();
        if (input[i].empty() || isEmptyLine(input[i]))
        {
            std::cout << "Contact cannot have empty field\n";
            i--;
            continue;
        }
    }
    index %= 8;
    contacts[index].setContactIndex(index);
    contacts[index].setFirstName(input[0]);
    contacts[index].setLastName(input[1]);
    contacts[index].setNickName(input[2]);
    contacts[index].setPhoneNumber(input[3]);
    contacts[index].setDarkestSecret(input[4]);
    index++;
    if (contactsCounter < 8)
        contactsCounter++;
}

static std::string substring(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void PhoneBook::showContacts(void)
{
    for (int i = 0; i < contactsCounter; i++)
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
    if (contactsCounter == 0)
    {
        std::cout << "Phonebook is empty!\n";
        return; 
    }
    showContacts();
    std::string index;
    std::cout << "Enter the index: ";
    std::getline(std::cin, index);
    if (std::cin.eof())
        exitProgram();
    int i = atoi(index.c_str());
    if (i <= 0 || i > contactsCounter)
    {
        std::cout << "Error: invalid index!\n";
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