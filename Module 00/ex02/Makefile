# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 10:55:13 by mel-yous          #+#    #+#              #
#    Updated: 2023/12/08 10:55:15 by mel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
COMPILER = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Account.hpp
	$(COMPILER) $(CPPFLAGS) -c $<

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: clean fclean all