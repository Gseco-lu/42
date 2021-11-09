/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:05:26 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/03 19:23:48 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr1;

	if (!dst && !src)
		return (0);
	ptr = dst;
	ptr1 = (char *)src;
	while (n != 0)
	{
		*ptr++ = *ptr1++;
		n--;
	}
	return (dst);
}
