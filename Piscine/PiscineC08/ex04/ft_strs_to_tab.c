/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:37:42 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/30 16:46:45 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	number;

	number = 0;
	while (*(str + number) != 0)
	{
		number++;
	}
	return (number);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc(ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, src);
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int			i;
	t_stock_str	*strcts;

	i = 0;
	strcts = (t_stock_str *)malloc(sizeof(struct s_stock_str) * (argc + 1));
	if (strcts == NULL)
		return (NULL);
	while (i < argc)
	{
		strcts[i].size = ft_strlen(*(argv + i));
		strcts[i].str = *(argv + i);
		strcts[i].copy = ft_strdup(*(argv + i));
		i++;
	}
	strcts[i].size = 0;
	strcts[i].str = 0;
	strcts[i].copy = 0;
	return (strcts);
}
