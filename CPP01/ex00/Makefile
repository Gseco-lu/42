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

clean:
		rm -rf $(OBJS)

fclean:
		rm -rf $(NAME)

re: fclean all
