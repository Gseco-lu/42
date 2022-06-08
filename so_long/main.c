/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:36:36 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/06/08 20:12:46 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

//void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
//{
//	char	*dst;
//
//	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
//	*(unsigned int*)dst = color;
//}
//
//int	main(void)
//{
//	void	*mlx;
//	void	*mlx_win;
//	t_data	img;
//	int		x;
//	int		y;
//	void	*player;
//	char	*relative_path = "FlameDemon-Evolved.xpm";
//
//	mlx = mlx_init();
//	mlx_win = mlx_new_window(mlx, 1920, 1080, "so_long");
//	img.img = mlx_new_image(mlx, 1920, 1080);
//	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
//	player = mlx_xpm_file_to_image(mlx, relative_path, &x, &y);
//	mlx_put_image_to_window(mlx, mlx_win, player, 50, 50);
//	mlx_loop(mlx);
//}
void render(t_game *g){
	mlx_put_image_to_window(g->mlx, g->win, g->player.img, g->player.x, g->player.y);
}

int	key_hook(int keycode, t_game *g)
{
	(void) keycode;
	(void) g;
	//if (keycode == KEY_ESC)
	//	exit_win(g);
	if (keycode == KEY_W)
		g->player.y -= 64;
	if (keycode == KEY_A)
		g->player.x -= 64;
	if (keycode == KEY_S)
		g->player.y += 64;
	if (keycode == KEY_D)
		g->player.x += 64;
	render(g);
	return (0);
}

static char	*ft_read_map_to_str(char *av)
{
	char	*line;
	int		fd;

	fd = open(av, O_RDONLY);
	line = NULL;
	line = get_next_line(fd);
	return (line);
}

int	main(int argc, char **argv)
{
	(void) argc;
	//static 	t_game		g;
	//char	*relative_path = "demon.xpm";
	//int		img_width;
	//int		img_height;
//
	//g.mlx = mlx_init();
	//g.win = mlx_new_window(g.mlx, 1920, 1080, "so_long");
	//g.player.x = 500;
	//g.player.y = 500;
	//g.player.img = mlx_xpm_file_to_image(g.mlx, relative_path, &img_width, &img_height);
	//render(&g);
	////img.img = mlx_new_image(mlx, 1920, 1080);
	//mlx_key_hook(g.win, key_hook, &g);
	//mlx_loop(g.mlx);
	ft_read_map_to_str(argv[1]);
	ft_printf("%s\n", ft_read_map_to_str(argv[1]));
}
