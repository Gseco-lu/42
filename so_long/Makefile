
NAME = so_long

SRCS =	main.c\

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

MLX_FLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit 

INCLUDES = -I mlx -I .

MLX = mlx/libmlx.a

.c.o:
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(MLX)
	$(CC) $(FLAGS) $(MLX_FLAGS) $(OBJS) -o $(NAME)

$(MLX):
	make -C mlx

clean:
	@rm -f $(OBJS)

fclean:	clean 
	@rm -f $(NAME) $(MLX)

re:	fclean all

.PHONY: all clean fclean re
