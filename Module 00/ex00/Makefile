# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 13:16:23 by mel-yous          #+#    #+#              #
#    Updated: 2023/09/30 16:38:33 by mel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone.exe
CPPFLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJ = megaphone.o
COMPILER = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(COMPILER) $(CPPFLAGS) -c $<

clean:
	del $(OBJ)
fclean: clean
	del $(NAME)
re: clean fclean