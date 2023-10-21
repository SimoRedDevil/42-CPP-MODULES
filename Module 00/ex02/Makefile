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