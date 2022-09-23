/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:16 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/07 17:43:16 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_end(t_window *window)
{
	int	i;

	i = -1;
	if (window->mapa)
	{
		while (window->mapa[++i])
			free(window->mapa[i]);
		free(window->mapa);
	}
	if (window->floor_img.img)
		mlx_destroy_image(window->mlx, window->floor_img.img);
	if (window->wall_img.img)
		mlx_destroy_image(window->mlx, window->wall_img.img);
	if (window->player_img.img)
		mlx_destroy_image(window->mlx, window->player_img.img);
	if (window->collect_img.img)
		mlx_destroy_image(window->mlx, window->collect_img.img);
	if (window->exit_img.img)
		mlx_destroy_image(window->mlx, window->exit_img.img);
	mlx_destroy_window(window->mlx, window->win);
	mlx_destroy_display(window->mlx);
	free(window->mlx);
	exit(0);
}

void	free_mapa(char **mapa2)
{
	int	iline;
	int	jcol;

	iline = -1;
	while (mapa2[++iline])
	{
		free(mapa2[iline]);
	}
	free(mapa2);
}
