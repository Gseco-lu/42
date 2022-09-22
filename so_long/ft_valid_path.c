/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:19:43 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/22 22:06:34 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_position(t_window *window, int x, int y, char **mapa2)
{
	if (x < 0 || y < 0 || x >= (window->x / 64) || y >= (window->y / 64))
		return (0);
	if (mapa2[x][y] != '1')
	{
		mapa2[x][y] = '1';
		return (1);
	}
	return (0);
}

void	check_path(t_window *window, int x, int y, char **mapa2)
{
	if (check_position(window, x - 1, y, mapa2))
		check_path(window, x - 1, y, mapa2);
	if (check_position(window, x + 1, y, mapa2))
		check_path(window, x + 1, y, mapa2);
	if (check_position(window, x, y - 1, mapa2))
		check_path(window, x, y - 1, mapa2);
	if (check_position(window, x, y + 1, mapa2))
		check_path(window, x, y + 1, mapa2);
}


//int	find_player(t_window *window, char **mapa2)
//{
//	int		iline;
//	int		jcol;
//	//char	**mapa2;
//
//	iline = -1;
//	//mapa2 = copy_map(window, mapa);
//	while (mapa2[++iline])
//	{
//		jcol = -1;
//		while (mapa2[iline][++jcol])
//		{
//			if (mapa2[iline][jcol] == 'P')
//			{
//				check_path(window, iline, jcol, mapa2);
//				return (validation(window, mapa2));
//			}
//		}
//	}
//}

int	find_player(t_window *window, char **mapa)
{
	int		iline;
	int		jcol;

	iline = -1;
	while (mapa[++iline])
	{
		jcol = -1;
		while (mapa[iline][++jcol])
		{
			if (mapa[iline][jcol] == 'P')
			{
				check_path(window, iline, jcol, mapa);
				return (validation(window, mapa));
			}
		}
	}
}
//char	**copy_map(t_window *window, char **mapa)
//{
//	int		i;
//	int		j;
//	char	**mapa2;
//
//	mapa2 = malloc(sizeof(char *) * (1 + (window.x / 64)));
//	if (!mapa2)
//		return (NULL);
//	while (++i < (window.y / 64))
//	{
//		j = 0;
//		mapa2[j] = malloc(sizeof(char) * ((window.y / 64) + 1));
//		if (!mapa2[i])
//			return (NULL);
//		while (j < window.x)
//		{
//			mapa2[i][j] = mapa[i][j];
//			i++;
//		}
//		mapa2[j][i] = '\0';
//	}
//	return (mapa2);
//}
//

int	copy_map(t_window *window, char **mapa)
{
	int		i;
	int		j;
	char	**mapa2;

	i = -1;
	mapa2 = malloc(sizeof(char *) * (1 + (window->x / 64)));
	if (!mapa2)
		return (NULL);
	while (++i < (window->x / 64))
	{
		j = 0;
		mapa2[i] = malloc(sizeof(char) * ((window->y / 64) + 1));
		if (!mapa2[i])
			return (NULL);
		while (j < (window->y / 64))
		{
			mapa2[i][j] = mapa[i][j];
			j++;
		}
	}
	if (find_player(window, mapa2) == 0)
		return (0);
	else
		return (1);
}

int	validation(t_window *window, char **mapa2)
{
	int	iline;
	int	jcol;

	iline = -1;
	while (mapa2[++iline])
	{
		jcol = -1;
		while (mapa2[iline][++jcol])
		{
			if (mapa2[iline][jcol] == 'E' || mapa2[iline][jcol] == 'C')
			{
				free_mapa(mapa2);
				return (0);
			}
		}
	}
	free_mapa(mapa2);
	return (1);
}
