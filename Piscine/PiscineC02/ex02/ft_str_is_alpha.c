/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:15:06 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/19 19:00:52 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_alpha(char c)
{
	if (((c >= 65) && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(str + i) != '\0')
	{
		if (is_alpha(*(str + i)) == 1)
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
