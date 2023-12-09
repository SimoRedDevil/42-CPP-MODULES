# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 10:54:42 by mel-yous          #+#    #+#              #
#    Updated: 2023/12/08 10:54:44 by mel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = PhoneBook.cpp Contact.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
INC = Contact.hpp PhoneBook.hpp
COMPILER = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(COMPILER) $(CPPFLAGS) -c $<

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: clean fclean all