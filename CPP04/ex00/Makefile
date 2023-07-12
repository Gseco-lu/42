CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME		= 	animal

SRC = main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
		rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re