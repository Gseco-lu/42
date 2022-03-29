NAME	= push_swap

Header	= push_swap.h

SRCS	= main.c\
					create_stack.c\
					ft_push.c\
					ft_reverse_rotate.c\
					ft_rotate.c\
					ft_select.c\
					ft_swap.c\

OBJS	= $(SRCS:c=o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)

clean: rm -f $(OBJS)

fclean: clean
		@rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re