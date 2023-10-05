NAME = account
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.c=.o)
COMPILER = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Account.hpp
	$(COMPILER) $(CPPFLAGS) -c $<

clean:
	del $(OBJ)
fclean: clean
	del $(NAME)
re: clean fclean