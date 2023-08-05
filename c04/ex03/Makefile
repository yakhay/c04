src =  main.cpp Ice.cpp Cure.cpp AMateria.cpp Character.cpp ICharacter.cpp MateriaSource.cpp IMateriaSource.cpp
OBJ = $(src:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME  =  AANIMAl

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
