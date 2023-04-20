NAME = zombie

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC = Zombie.cpp\
		newZombie.cpp\
		main.cpp\
		randomChump.cpp
		

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

m:
	rm -rf $(NAME)
r:
	make re && clear &&./$(NAME)

re: fclean all
