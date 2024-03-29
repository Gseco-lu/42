/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:19 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/07 17:43:19 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_gameinit(t_window *window)
{
	window->mlx = mlx_init();
	window->win = mlx_new_window(window->mlx, window->y, \
	window->x, "so_long");
	ft_keysinit(window);
	ft_mapinit(window);
	ft_playerinit(window, window->mapa);
}

void	ft_keysinit(t_window *window)
{
	window->keys.esc = 0;
	window->keys.a = 0;
	window->keys.w = 0;
	window->keys.s = 0;
	window->keys.d = 0;
}

void	ft_mapinit(t_window *window)
{
	window->wall_img.img = mlx_xpm_file_to_image \
	(window->mlx, "./imgs/wall.xpm", &window->wall_img.width, \
	&window->wall_img.height);
	window->floor_img.img = mlx_xpm_file_to_image \
	(window->mlx, "./imgs/floor.xpm", &window->floor_img.width, \
	&window->floor_img.height);
	window->collect_img.img = mlx_xpm_file_to_image \
	(window->mlx, "./imgs/collect.xpm", &window->collect_img.width, \
	&window->collect_img.height);
	window->exit_img.img = mlx_xpm_file_to_image \
	(window->mlx, "./imgs/exit.xpm", &window->exit_img.width, \
	&window->exit_img.height);
	window->player_img.img = mlx_xpm_file_to_image \
	(window->mlx, "./imgs/player.xpm", &window->player_img.width, \
	&window->player_img.height);
}

void	ft_playerinit(t_window *window, char **mapa)
{
	int	iline;
	int	jcol;

	iline = -1;
	while (mapa[++iline])
	{
		jcol = -1;
		while (mapa[iline][++jcol])
		{
			if (mapa[iline][jcol] == 'P')
			{
				window->player_img.x = jcol * 64;
				window->player_img.y = iline * 64;
			}
		}
	}
	window->player_img.speed = 64;
	mlx_put_image_to_window(window->mlx, window->win, \
	window->player_img.img, window->player_img.x, window->player_img.y);
}

void	ft_initcollect(t_window *window, char **mapa)
{
	static int	i;
	static int	j;

	i = -1;
	while (mapa[++i])
	{
		j = -1;
		while (mapa[i][++j])
		{
			if (mapa[i][j] == 'C')
			{
				window->collect_img.x = j * 64;
				window->collect_img.y = i * 64;
				ft_delcollect(window, i, j);
			}
		}
	}
}
