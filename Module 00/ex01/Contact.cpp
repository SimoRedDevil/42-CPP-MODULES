#include "Contact.hpp"
#include <stdio.h>

Contact::Contact(void)
{
    /*NOTHING*/
}
Contact::~Contact(void)
{
    /*NOTHING*/
}

void Contact::setContactIndex(int index)
{
    contactIndex = index;
}

void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

int Contact::getContactIndex(void)
{
    return contactIndex;
}

std::string Contact::getFirstName(void)
{
    return firstName;
}

std::string Contact::getLastName(void)
{
    return lastName;
}

std::string Contact::getNickName(void)
{
    return nickName;
}

std::string Contact::getPhoneNumber(void)
{
    return phoneNumber;
}

std::string Contact::getDarkestSecret(void)
{
    return darkestSecret;
}