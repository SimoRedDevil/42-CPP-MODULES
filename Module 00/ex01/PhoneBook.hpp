/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:54:55 by mel-yous          #+#    #+#             */
/*   Updated: 2023/12/08 15:16:49 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <stdlib.h>
#include <iomanip>

class PhoneBook
{
    private:
        Contact contacts[8];
        int contactsCounter;
        void showContacts(void);
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void addContact(void);
        void search(void);
        void exitProgram(void);
};

#endif