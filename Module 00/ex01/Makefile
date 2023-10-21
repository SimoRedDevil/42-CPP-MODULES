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