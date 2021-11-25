/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:33:27 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/19 19:07:04 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && (*(str + i) <= 122))
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
