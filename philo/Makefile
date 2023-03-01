NAME = philo

SRCS =	main.c\
		simulation.c\
		actions.c\
		utils.c\
		death.c

OBJS = $(SRCS:.c=.o)

CC = gcc 


INCLUDES = -I .

LINKERS = -pthread

FLAGS = -Wall -Wextra -Werror -fsanitize=address -g


GREEN		=	\033[0;32m
YELLOW	=	\033[0;33m
RED		=	\033[0;31m
BLUE_PISK		=	\033[0;34;5;199m
BLUE		=	\033[0;36m
VIOLET	=	\033[0;38;5;199m
RESET		=	\033[0m

.c.o:
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(LINKERS) $(OBJS) -o $(NAME)


all: $(NAME)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean