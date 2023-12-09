/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:54:26 by mel-yous          #+#    #+#             */
/*   Updated: 2023/12/08 10:54:28 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        int contactIndex;
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public :
        Contact(void);
        ~Contact(void);

        void setContactIndex(int index);
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setNickName(std::string nickName);
        void setPhoneNumber(std::string phoneNumber);
        void setDarkestSecret(std::string darkestSecret);
        
        int getContactIndex(void);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
};

#endif