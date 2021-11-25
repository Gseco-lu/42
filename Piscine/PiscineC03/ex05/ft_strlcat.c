/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:21:30 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/23 15:48:50 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	i3;

	i = ft_strlen(dest);
	i2 = 0;
	i3 = ft_strlen(src);
	if (size <= i)
		return (size + i3);
	if (size > 0 && size > i)
	{
		while (*(src + i2) != '\0' && i + i2 < size - 1)
		{
			*(dest + i + i2) = *(src + i2);
			i2++;
		}
		*(dest + i + i2) = '\0';
	}
	return (i + i3);
}
