NAME = fixed

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC = main.cpp\
		Fixed.cpp\
		

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean:
		rm -rf $(NAME)

re: fclean all
