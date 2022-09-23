/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:32 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/07 17:43:32 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32

# endif

# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# define KEY_PRESS		2
# define KEY_RELEASE	3
# define X_WINBUTTON	17

# define KEY_ESC	65307
# define KEY_A		97
# define KEY_S		115
# define KEY_D		100
# define KEY_W		119

typedef struct s_keys
{
	int	esc;
	int	a;
	int	w;
	int	s;
	int	d;
}t_keys;

typedef struct s_param
{
	int		x;
	int		y;
}t_param;

typedef struct s_images
{
	void	*img;
	int		width;
	int		height;
	int		count;
	int		n;
	int		x;
	int		y;
	int		speed;
}t_images;

typedef struct s_window
{
	void		*mlx;
	void		*win;
	int			count;
	int			mvcount;
	char		**mapa;
	int			x;
	int			y;

	t_images	collect_img;
	t_images	wall_img;
	t_images	floor_img;
	t_images	exit_img;
	t_images	player_img;
	t_keys		keys;
}t_window;

int			ft_map_prep(t_window *window, char **argv);
char		**ft_mapstr(char **mapa, int fd, int counter);
int			ft_checkmaprec(t_window *window, char **mapa);
int			ft_checkmapclosed(char **mapa);
int			ft_checkmapcomplete(t_window *window, char **mapa);
int			ft_validchar(t_window *window, char **mapa);
void		ft_gameinit(t_window *window);
void		ft_keysinit(t_window *window);
void		ft_mapinit(t_window *window);
void		ft_playerinit(t_window *window, char **mapa);
void		ft_initcollect(t_window *window, char **mapa);
int			ft_work(t_window *window);
void		ft_printmap(t_window *window, char **mapa);
void		ft_delcollect(t_window *window, int i, int j);
void		ft_initexit(t_window *window, char **mapa);
int			ft_startwalking(int key, t_window *window);
int			ft_stopwalking(int key, t_window *window);
int			ft_move(t_window *window);
void		ft_end(t_window *window);
void		ft_movecount(t_window *window);
int			validation(t_window *window, char **mapa2);
int			copy_map(t_window *window, char **mapa);
int			find_player(t_window *window, char **mapa);
void		check_path(t_window *window, int x, int y, char **mapa2);
int			check_position(t_window *window, int x, int y, char **mapa2);
int			check_map_name(char *map);
void		ft_wichside(t_window *window);
void		free_mapa(char **mapa2);
void		ft_update_right(t_window *window);
void		ft_update_left(t_window *window);
void		ft_update_up(t_window *window);
void		ft_update_down(t_window *window);

int			ft_strlen(const char *str);

char		*get_next_line(int fd);
int			searchn(char *buff);
char		*get_line(char *line, char *buff, int size);
int			checkn(char *buffer);

typedef unsigned long long int		t_ulli;

int			ft_printf(const char *type, ...);
int			ft_type(const char *format, int i, va_list *args);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_conv_base(t_ulli n, char *base, t_ulli base_size);
int			ft_putnumber(int n);
int			ft_putui(unsigned int n, char *base, int base_size);
int			ft_putul(unsigned long n);
void		free_images(t_window *window);
int			check_map_name_utils(char *map);
int			copy_map_utils(t_window *window, char **mapa2);

#endif