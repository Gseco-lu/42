/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:24:57 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/20 19:10:20 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (*(src + count) != '\0')
	{
		count++;
	}
	if (size != 0)
	{
		while (*(src + i) != '\0' && i < (size - 1))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	return (count);
}
