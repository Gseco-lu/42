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
	mlx_destroy_window(window->mlx, window->win);
	ft_end(window);
}

int	main(int argc, char **argv)
{
	t_window	*window;

	if (argc != 2 || !check_map_name(argv[1]))
		exit(0);
	window = (t_window *)malloc(sizeof(t_window));
	window->mvcount = 0;
	window->collect_img.count = 0;
	if (!ft_map_prep(window, argv))
		exit(0);
	if (!found_player(window, window->mapa))
		exit(0);
	ft_gameinit(window);
	mlx_hook(window->win, X_WINBUTTON, 1L << 3, &ft_xbutton, window);
	mlx_hook(window->win, KEY_PRESS, 1, ft_startwalking, window);
	mlx_hook(window->win, KEY_RELEASE, 1, ft_stopwalking, window);
	mlx_loop_hook(window->mlx, ft_work, window);
	mlx_loop(window->mlx);
	ft_end(window);
}

void	ft_putlst_fd(char **lst, int fd)
{
	int	i;

	if (!lst)
		return ;
	i = 0;
	while (lst[i])
	{
		ft_putstr_fd(lst[i], fd);
		ft_putchar_fd('\n', fd);
		i++;
	}
}