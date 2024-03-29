/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:28 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/07 17:43:28 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_startwalking(int key, t_window *window)
{
	if (key == KEY_ESC)
		ft_end(window);
	if (key == KEY_A)
		window->keys.a = 1;
	if (key == KEY_W)
		window->keys.w = 1;
	if (key == KEY_S)
		window->keys.s = 1;
	if (key == KEY_D)
		window->keys.d = 1;
	return (1);
}

int	ft_stopwalking(int key, t_window *window)
{
	if (key == KEY_ESC)
		ft_end(window);
	if (key == KEY_A)
		window->keys.a = 0;
	if (key == KEY_W)
		window->keys.w = 0;
	if (key == KEY_S)
		window->keys.s = 0;
	if (key == KEY_D)
		window->keys.d = 0;
	return (1);
}

int	ft_move(t_window *window)
{
	ft_printmap(window, window->mapa);
	ft_initcollect(window, window->mapa);
	ft_initexit(window, window->mapa);
	mlx_put_image_to_window(window->mlx, window->win, \
	window->player_img.img, window->player_img.x, window->player_img.y);
	return (1);
}

int	ft_work(t_window *window)
{
	ft_wichside(window);
	ft_move(window);
	return (1);
}
