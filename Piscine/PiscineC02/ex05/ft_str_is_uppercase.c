/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:44:54 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/19 19:08:51 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 65) && (*(str + i) <= 90))
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
