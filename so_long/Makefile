NAME = so_long

SRCS =	main.c\
		conv.c\
		exit.c\
		inits.c\
		moves_update.c\
		moves.c\
		updates.c\
		utils.c\
		validmap.c

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

MLX_FLAGS =  -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz

INCLUDES = -I/usr/include -Imlx_linux -O3 -I gnl -I ft_printf -I .

MLX = mlx_linux/libmlx.a

GNL = gnl/libgnl.a

PRINTF = ft_printf/libftprintf.a

.c.o:
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(MLX) $(GNL) $(PRINTF)
	$(CC) $(FLAGS) $(INCLUDES) $(MLX_FLAGS) $(OBJS) -o $(NAME)

$(MLX):
	make -C mlx

$(GNL):
	make -C gnl

$(PRINTF):
	make -C ft_printf

clean:
	@rm -f $(OBJS)

fclean:	clean 
	@rm -f $(NAME) $(MLX) $(GNL) $(PRINTF)

re:	fclean all

.PHONY: all clean fclean re