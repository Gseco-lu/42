/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:47:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/28 17:52:21 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (*(src + n) != '\0')
		n++;
	ptr = malloc(n * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (*(src + i) != '\0')
	{
		*(ptr + i) = *(src + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
