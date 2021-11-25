/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:14:49 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/29 18:33:05 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	n;

	i = 0;
	ptr = (int *) malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	while (i < (max - min))
	{
		*(ptr + i) = (min + i);
		i++;
	}
	return (ptr);
}
