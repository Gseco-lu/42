/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:25:38 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/19 19:24:22 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_get_type(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (2);
	if (c >= 48 && c <= 57)
		return (3);
	return (0);
}

int	condition(char c)
{
	if (c == '\0' || c == 32 || !ft_get_type(c))
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (ft_get_type(*(str + i)) == 1)
			*(str + i) += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (*(str + i) != '\0')
	{
		if (condition(*(str + i - 1)) == 1)
		{
			if (ft_get_type(*(str + i)) == 2)
			{
				(*(str + i)) -= 32;
			}
		}
		i++;
	}
	return (str);
}
