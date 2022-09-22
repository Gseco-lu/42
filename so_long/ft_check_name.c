/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_name.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:28:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/22 19:00:09 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_name(char *map)
{
	int	fd;
	int	len;

	len = ft_strlen(map);
	fd = open(map, O_DIRECTORY);
	if (fd >= 0 && (len < 4 || map[len - 4] != '.' || map[len - 3] != 'b'
			|| map[len - 2] != 'e' || map[len - 1] != 'r'))
			{
				ft_printf("error map\n");
				close (fd);
				return (0);
			}
	fd = open(map, O_RDONLY);
	if (fd < 0 && (len < 4 || map[len - 4] != '.' || map[len - 3] != 'b'
			|| map[len - 2] != 'e' || map[len - 1] != 'r'))
			{
				ft_printf("error map\n");
				close (fd);
				return (0);
			}
	if (len < 4 || map[len - 4] != '.' || map[len - 3] != 'b'
		|| map[len - 2] != 'e' || map[len - 1] != 'r')
		{
				ft_printf("error map\n");
				close (fd);
				return (0);
		}
	return (1);
}
