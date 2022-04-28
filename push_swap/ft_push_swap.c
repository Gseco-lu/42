/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:33:57 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 20:33:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_atol(const char *str)
{
	int		i;
	int		sign;
	long	new;

	i = 0;
	sign = 1;
	while ((str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r') && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	new = 0;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		new = (new * 10) + (str[i] - '0');
		i++;
	}
	return (sign * new);
}

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	long unsigned	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < (n - 1))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*void	ft_push_swap(int argc, char **argv)
{
	ft_create_stack(argc, argv);
}*/