NAME = AMateria
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
INC = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
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