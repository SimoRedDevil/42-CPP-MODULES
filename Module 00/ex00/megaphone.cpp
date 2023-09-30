/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:40:47 by mel-yous          #+#    #+#             */
/*   Updated: 2023/09/30 17:25:29 by mel-yous         ###   ########.fr       */
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