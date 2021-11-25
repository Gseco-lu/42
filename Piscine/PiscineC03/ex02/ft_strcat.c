/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:11:16 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/20 15:32:00 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (*(src + i) != '\0')
	{
		(*(dest + count + i) = *(src + i));
		i++;
	}
	*(dest + count + i) = '\0';
	return (dest);
}
