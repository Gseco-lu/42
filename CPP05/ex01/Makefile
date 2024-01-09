CC			= 	g++ -std=c++98
CFLAGS		= 	-Wall -Wextra -Werror -Wshadow  -g\
				# -fsanitize=address
NAME		= 	form
SRCS		=	Bureaucrat.cpp\
				main.cpp\
				Form.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -I. -o $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re