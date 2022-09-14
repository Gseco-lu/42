/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:01:41 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/14 17:01:41 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*get_next_line(int fd)
{
	char			*line;
	static char		buff[FOPEN_MAX][BUFFER_SIZE];
	int				i;
	int				size;

	line = 0;
	size = 0;
	if (fd < 0 || fd >= FOPEN_MAX)
		return (line);
	while (1)
	{
		i = 1;
		if (!buff[fd][0])
			i = read(fd, buff[fd], BUFFER_SIZE);
		size += searchn(buff[fd]);
		if (i > 0)
			line = get_line(line, buff[fd], size);
		if (!checkn(buff[fd]) || i <= 0)
			break ;
	}
	return (line);
}