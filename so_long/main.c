/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:36:36 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/06/07 19:14:48 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include <stdio.h>

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

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	key_hook(int keycode, t_vars *vars)
{
	(void) keycode;
	(void) vars;
	if (keycode == KEY_ESC)
		exit_win(g);
	if (keycode == KEY_W)
	if (keycode == KEY_A)

	if (keycode == KEY_S)
	
	if (keycode == KEY_D)
	
	return (0);
}

int	main(void)
{
	void	*mlx;
	void	*img;
	void	*mlx_win;
	char	*relative_path = "demon.xpm";
	int		img_width;
	int		img_height;
	t_vars	vars;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "so_long");
	//img.img = mlx_new_image(mlx, 1920, 1080);
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	mlx_put_image_to_window(mlx, mlx_win, img, 50, 50);
	mlx_key_hook(mlx_win, key_hook, &vars);
	mlx_loop(mlx);
}
