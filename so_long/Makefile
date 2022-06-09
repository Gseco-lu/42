
NAME = so_long

SRCS =	main.c\

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

MLX_FLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit 

INCLUDES = -I mlx -I ##gnl -I ft_printf -I .

MLX = mlx/libmlx.a

##GNL = gnl/libgnl.a

##PRINTF = ft_printf/libftprintf.a

.c.o:
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(MLX) $(GNL) $(PRINTF)
	$(CC) $(FLAGS) $(INCLUDES) $(MLX_FLAGS) $(OBJS) -o $(NAME)

$(MLX):
	make -C mlx

##$(GNL):
	make -C gnl

##$(PRINTF):
	make -C ft_printf

clean:
	@rm -f $(OBJS)

fclean:	clean 
	@rm -f $(NAME) $(MLX) $(GNL) $(PRINTF)

re:	fclean all

.PHONY: all clean fclean re
