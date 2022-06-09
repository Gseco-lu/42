/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:36:36 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/06/09 15:57:44 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//void	put_img(t_game *g, int x, int y, char *string)
//{
//	int	i;
//
//	i = 0;
//	while (string[i])
//	{
//		if string[i] == 
//	} 
//}
//
//void	allocate_images(t_game *g)
//{
//	g.player.img = mlx_xpm_file_to_image(g.mlx, relative_path, &img_width, &img_height);
//}

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

//static char	*ft_read_map_to_str(char *av)
//{
//	static char	**line;
//	int			fd;
//	int			i;
//	char		*tmp
//	char		**tmp1
//
//	i = 0;
//	fd = open(av, O_RDONLY);
//	line = NULL;
//	while (1)
//	{
//		tmp = get_next_line(fd);
//		tmp1[i] = tmp;
//		if (!line[i])
//			break ;
//		i++;
//	}
//	line = (i) * malloc (sizeof(ft_strlen(tmp)*(char *));
//	line = tmp1;
//	if (!line)
//		break ;
//	return (line);
//}

int	main(void) //int argc, char **argv)
{
	(void) argc;
	char	**line;
	static 	t_game		g;
	char	*relative_path = "demon.xpm";
	int		img_width;
	int		img_height;

	g.mlx = mlx_init();
	g.win = mlx_new_window(g.mlx, 1920, 1080, "so_long");
	g.player.x = 500;
	g.player.y = 500;
	g.player.img = mlx_xpm_file_to_image(g.mlx, relative_path, &img_width, &img_height);
	render(&g);
	//img.img = mlx_new_image(mlx, 1920, 1080);
	mlx_key_hook(g.win, key_hook, &g);
	mlx_loop(g.mlx);
	//g.map = ft_read_map_to_str(argv[1]);
}
