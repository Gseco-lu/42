/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:06:01 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/03 19:06:09 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*sentence;
	size_t			i;

	i = 0;
	sentence = (unsigned char *)b;
	while (i < len)
	{
		sentence[i] = c;
		i++;
	}
	return (sentence);
}
