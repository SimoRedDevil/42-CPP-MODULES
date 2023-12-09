/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:54:36 by mel-yous          #+#    #+#             */
/*   Updated: 2023/12/08 10:54:38 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook myPhoneBook;
    std::string line;
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "|        --> Welcome to your awesome phonebook <--         |" << std::endl << std::endl;
    std::cout << "| You have 3 possible commands to do: ADD - SEARCH - EXIT  |" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    while (!std::cin.eof())
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
            std::cout << "Invalid command, try again..." << std::endl;
    }
    return (0);
}