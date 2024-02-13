NAME = RPN

SRCS = 	main.cpp \
		RPN.cpp

CC = c++ -std=c++98 -Wall -Wextra -Werror -Wshadow -g 

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re