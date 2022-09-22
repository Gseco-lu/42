NAME = so_long

SRCS = main.c ft_validmap.c ft_inits.c ft_updates.c ft_moves.c ft_exit.c ft_gnl.c \
		ft_gnl_utils.c ft_conv.c ft_printf.c ft_utils.c ft_moves_update.c ft_check_name.c \
		ft_validmap.c ft_valid_path.c

MLX_LIB_DIR = mlx_linux/
MLX_INCLUDE = -Imlx_linux
MLX_FLAGS = -L$(MLX_LIB_DIR) -lmlx_Linux -L/usr/lib -lXext -lX11 -lm -lz

OBJS = $(SRCS:.c=.o)

CC = clang
CFLAGS = -Wall -Werror -Wextra

all: $(NAME) 

$(NAME): $(OBJS)
		make -C mlx_linux
		@$(CC) $(^) $(MLX_FLAGS) -o $(@)

%.o: %.c
	@$(CC) $(MLX_INCLUDE) -c $(^) -o $(@)
##-g -fsanitize=address 
clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all