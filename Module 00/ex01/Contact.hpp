#pragma once

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    int         index;

public:
    /*----------------Setters----------------*/
    void setFirstName(std::string firstName);
    void setLastName(std::string firstName);
    void setNickName(std::string firstName);
    void setPhoneNumber(std::string firstName);
    void setDarkestSecret(std::string firstName);
    void setIndex(int index);
    
    /*----------------Getters----------------*/
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    int         getIndex();
};

#endif