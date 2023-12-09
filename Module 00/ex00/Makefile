# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 10:53:12 by mel-yous          #+#    #+#              #
#    Updated: 2023/12/08 10:53:14 by mel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJ = megaphone.o
COMPILER = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(COMPILER) $(CPPFLAGS) -c $<

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: clean fclean all