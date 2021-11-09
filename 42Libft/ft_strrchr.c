/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:10:59 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/04 15:37:13 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ocurrence;
	char	myc;

	ocurrence = 0;
	myc = c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == myc)
			ocurrence = (char *)&s[i];
		i++;
	}
	if (myc == '\0')
		return ((char *)&s[i]);
	if (ocurrence != 0)
		return (ocurrence);
	return (0);
}
