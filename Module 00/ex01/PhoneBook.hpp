#pragma once

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     contactsCounter;
public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
    void searchContact();
    void printContacts();
    void exit();
};

#endif