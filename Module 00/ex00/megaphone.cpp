/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:53:41 by mel-yous          #+#    #+#             */
/*   Updated: 2023/12/08 10:53:44 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++){
            std::string str(argv[i]);   
            for (int j = 0; j < (int)str.length(); j++)
                std::cout << (char)std::toupper(str.at(j));
        }
    }
    return (std::cout << std::endl, 0);
}