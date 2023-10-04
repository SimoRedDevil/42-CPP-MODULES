NAME = phonebook.exe
CPPFLAGS = -Wall -Wextra -Werror
SRCS = PhoneBook.cpp Contact.cpp main.c
OBJS = $(SRCS:.c=.o)
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