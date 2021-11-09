/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:05:38 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/03 19:24:49 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	i = 0;
	if (!ptrdest && !ptrsrc)
		return (NULL);
	if (ptrdest > ptrsrc)
	{
		len++;
		while (--len > 0)
			(ptrdest)[len - 1] = (ptrsrc)[len - 1];
	}
	else
	{
		while (i < len)
		{
			(ptrdest)[i] = (ptrsrc)[i];
			i++;
		}
	}
	return (dest);
}
