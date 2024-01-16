NAME = serializer

SRCS = Serializer.cpp\
		main.cpp

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror -Wshadow -g

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -I. -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re: fclean all