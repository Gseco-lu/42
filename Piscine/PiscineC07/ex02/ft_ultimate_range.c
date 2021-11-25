/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:50:06 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/28 17:50:32 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	n;

	i = 0;
	n = max - min;
	ptr = malloc(n * sizeof(char));
	if (min >= max)
		return (ptr);
	if (ptr == NULL)
		return (0);
	while (i < n)
	{
		*(ptr + i) = (min + i);
		i++;
	}
	return (ptr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (*range == NULL)
		return (-1);
	return (max - min);
}
