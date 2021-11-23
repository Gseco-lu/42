/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:32:41 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/23 16:54:54 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>*/
#include "get_next_line.h"

char	*line_saving(char **stor, char **buffer, int len)
{
	char	*ret;
	char	*temp;
	int		i;

	if (*stor)
		i = ft_strlen(*stor);
	else
		i = 0;
	ret = malloc((len + i + 1) * sizeof(char));
	if (!ret)
		return (0);
	ft_memcpy(ret, *stor, i);
	ft_memcpy(ret + i, *buffer, len);
	ret[len + i] = '\0';
	temp = ft_strdup((*buffer) + len);
	if (*stor)
		free(*stor);
	*stor = temp;
	return (ret);
}

char	*buffer_saving(char **stor, char **buffer, int r)
{
	char	*line;
	char	*temp;

	line = NULL;
	if (r <= 0)
	{
		if (r == 0 && *stor)
		{
			line = (*stor);
			(*stor) = NULL;
		}
		return (line);
	}
	(*buffer)[r] = '\0';
	temp = ft_strchr(*buffer, '\n');
	if (temp)
		line = line_saving(stor, buffer, (temp - *buffer) + 1);
	else
	{
		temp = ft_strjoin(*stor, *buffer);
		if (*stor)
			free(*stor);
		*stor = temp;
	}
	return (line);
}

char	*final(char **stor, int len)
{
	char	*line;
	char	*temp;
	int		i;

	line = malloc((len + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (i != len)
	{
		line[i] = (*stor)[i];
		i++;
	}
	line[i] = '\0';
	temp = ft_strdup(*stor + i);
	free(*stor);
	(*stor) = temp;
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;
	char		*buffer;
	int			r;

	if ((read(fd, 0, 0) == -1) || fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	r = 1;
	line = NULL;
	buffer = ft_strchr(storage, '\n');
	if (!buffer)
	{
		buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buffer)
			return (0);
		while (line == NULL && r > 0)
		{
			r = read(fd, buffer, BUFFER_SIZE);
			line = buffer_saving(&storage, &buffer, r);
		}
		free(buffer);
	}
	else
		line = final(&storage, (buffer - storage) + 1);
	return (line);
}

/*int	main()
{
	int	x;

	x = open("fd.txt", O_RDONLY);
	if (x < 0)
	{
		printf("Error reading the file");
		return (0);
	}
	else
	{
		printf("%s\n", get_next_line(x));
		printf("%s\n", get_next_line(x));
		printf("%s\n", get_next_line(x));
		printf("%s\n", get_next_line(x));
		printf("%s\n", get_next_line(x));	
		printf("%s\n", get_next_line(x));
		printf("%s\n", get_next_line(x));
	}
}*/
