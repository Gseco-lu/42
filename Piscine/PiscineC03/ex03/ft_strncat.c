/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:32:43 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/21 16:45:16 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (*(dest + count) != '\0')
	{
		count++;
	}
	while ((*(src + i) != '\0') && i < nb)
	{
		(*(dest + count + i) = *(src + i));
		i++;
	}
	*(dest + count + i) = '\0';
	return (dest);
}
