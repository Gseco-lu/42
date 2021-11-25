/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:06:18 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/28 17:49:09 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	g_i = 0;
int	g_j = 0;
int	g_y = 0;
int	g_x = 0;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int	calc_len(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + (ft_strlen(*(strs + i)));
		i++;
	}
	count = count + (ft_strlen(sep) * i);
	return (count);
}

char	*ft_write(int size, char *ptr, char **strs, char *sep)
{
	while (g_i < size)
	{
		while (strs[g_i][g_j] != '\0')
		{
			*(ptr + g_y) = strs[g_i][g_j];
			g_j++;
			g_y++;
		}
		while (g_x < ft_strlen(sep) && g_i < size - 1)
		{
			*(ptr + g_y) = *(sep + g_x);
			g_x++;
			g_y++;
		}
		g_j = 0;
		g_x = 0;
		g_i++;
	}
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	ptr = (char *)malloc(sizeof(char) * calc_len(size, strs, sep));
	if (ptr == NULL)
		return (0);
	ptr = ft_write(size, ptr, strs, sep);
	return (ptr);
}
