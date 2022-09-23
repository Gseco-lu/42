/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:23 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/07 17:43:23 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_xbutton(t_window *window)
{
	ft_end(window);
	return (0);
}

int	main(int argc, char **argv)
{
	static t_window	window;

	if (argc != 2 || !check_map_name_utils(argv[1]))
		exit(0);
	window.mvcount = 1;
	window.collect_img.count = 0;
	window.x = 0;
	window.y = 0;
	if (!ft_map_prep(&window, argv))
	{
		ft_printf("Error: Invalid map\n");
		exit(0);
	}
	if (copy_map(&window, window.mapa) == 0)
	{
		ft_printf("Error: Invalid path\n");
		exit(0);
	}
	ft_gameinit(&window);
	mlx_hook(window.win, X_WINBUTTON, 1L << 3, &ft_xbutton, &window);
	mlx_hook(window.win, KEY_PRESS, 1, ft_startwalking, &window);
	mlx_hook(window.win, KEY_RELEASE, 1, ft_stopwalking, &window);
	mlx_loop_hook(window.mlx, ft_work, &window);
	mlx_loop(window.mlx);
	ft_end(&window);
}
