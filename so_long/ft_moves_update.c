/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_update.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:26 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/07 17:43:26 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_update_left(t_window *window)
{
	if (window->keys.a && !window->keys.d && !window->keys.w && !window->keys.s)
	{
		window->player_img.img = window->player_img.img;
		window->player_img.x -= window->player_img.speed;
		if (window->mapa[(window->player_img.y / 64)] \
		[(window->player_img.x / 64)] == '1')
		{
			window->player_img.x += window->player_img.speed;
			window->mvcount -= 1;
		}
		else
			ft_printf("Steps: %i\n", window->mvcount);
		window->keys.a = 0;
		window->mvcount += 1;
	}
}

void	ft_update_right(t_window *window)
{
	if (window->keys.d && !window->keys.a && !window->keys.w && !window->keys.s)
	{
		window->player_img.x += window->player_img.speed;
		if (window->mapa[window->player_img.y / 64] \
		[(window->player_img.x / 64)] == '1')
		{
			window->player_img.x -= window->player_img.speed;
			window->mvcount -= 1;
		}
		else
			ft_printf("Steps: %i\n", window->mvcount);
		window->keys.d = 0;
		window->mvcount += 1;
	}
}

void	ft_update_up(t_window *window)
{
	if (window->keys.w && !window->keys.d && !window->keys.a && !window->keys.s)
	{
		window->player_img.y -= window->player_img.speed;
		if (window->mapa[window->player_img.y / 64] \
		[window->player_img.x / 64] == '1')
		{
			window->player_img.y += window->player_img.speed;
			window->mvcount -= 1;
		}
		else
			ft_printf("Steps: %i\n", window->mvcount);
		window->keys.w = 0;
		window->mvcount += 1;
	}
}

void	ft_update_down(t_window *window)
{
	if (window->keys.s && !window->keys.d && !window->keys.w && !window->keys.a)
	{
		window->player_img.y += window->player_img.speed;
		if (window->mapa[(window->player_img.y / 64)] \
		[(window->player_img.x / 64)] == '1')
		{
			window->player_img.y -= window->player_img.speed;
			window->mvcount -= 1;
		}
		else
			ft_printf("Steps: %i\n", window->mvcount);
		window->keys.s = 0;
		window->mvcount += 1;
	}
}

void	ft_wichside(t_window *window)
{
	static int	speed;

	if (speed++ < 8)
		return ;
	speed = 0;
	ft_update_up(window);
	ft_update_down(window);
	ft_update_left(window);
	ft_update_right(window);
}
