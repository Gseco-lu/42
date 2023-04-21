NAME = horde

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC = Zombie.cpp\
		ZombieHorde.cpp\
		main.cpp 
		

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean:
		rm -rf $(NAME)

re: fclean all
