# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simo <simo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 13:16:23 by mel-yous          #+#    #+#              #
#    Updated: 2023/10/18 17:38:39 by simo             ###   ########.fr        #
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