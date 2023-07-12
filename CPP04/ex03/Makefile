CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME		= 	materia

SRC = main.cpp\
		AMateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp\
		ICharacter.cpp\
		IMateriaSource.cpp\
		MateriaSource.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
		rm -rf $(NAME)

re: fclean all


.PHONY: all fclean re