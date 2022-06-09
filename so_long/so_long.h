/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:17:00 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/06/09 15:55:43 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
//# include "gnl/get_next_line.h"
# include "mlx.h"
//# include "ft_printf/ft_printf.h"

# define X_EVENT_KEY_PRESS			2
# define X_EVENT_KEY_RELEASE		3
# define X_EVENT_KEY_EXIT			17

# define KEY_ESC		53
# define KEY_W			13
# define KEY_A			0
# define KEY_S			1
# define KEY_D			2

typedef struct s_player	t_player;

struct s_player {
	void		*img;
	int			x;
	int			y;

};
typedef struct s_game {
	void		*mlx;
	void		*win;
	t_player	player;
	void		*wall;
	void		*collect;
	void		*exit;
	char		**map;
}	t_game;

#endif