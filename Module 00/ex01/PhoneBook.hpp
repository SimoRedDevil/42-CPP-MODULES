#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <stdlib.h>
#include <iomanip>

class PhoneBook
{
    private:
        Contact contacts[8];
        int counter;
        void showContacts(void);
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void addContact(void);
        void search(void);
        void exitProgram(void);
};

#endif