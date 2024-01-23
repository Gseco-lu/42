CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = convert

SRCS = ScalarConverter.cpp\
		main.cpp


all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -I. -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re: fclean all