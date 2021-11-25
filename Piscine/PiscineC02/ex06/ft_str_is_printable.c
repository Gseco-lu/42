/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:53:06 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/19 19:11:13 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 32) && (*(str + i) <= 127))
		{
			count++;
		}
		i++;
	}
	if (count == i)
	{
		return (1);
	}
	return (0);
}
