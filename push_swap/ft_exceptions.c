/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exceptions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:35:09 by marvin            #+#    #+#             */
/*   Updated: 2022/04/27 15:35:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_duplicate(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strlen(argv[i]) == ft_strlen(argv[j]))
			{
				if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[i])) == 0)
				{
					write(1,"Error\n", 6);
					return (0);
				}
			}
        j++;
        }
    i++;
	}
	return (1);
}

int	check_nbr(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][0] == '-' || argv[i][0] == '+')
			j++;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 && argv[i][j])
			{
				write(1,"Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_overflow(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_atol(argv[i]) < -2147483648 || ft_atol(argv[i]) > 2147483647)
		{
			write(1,"Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_exceptions(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1,"Error\n", 6);
		return (0);
	}
	if (!check_overflow(argv))
		return (0);
	if (!ft_duplicate(argv))
		return (0);
	if (!check_nbr(argv))
		return (0);
	return (1);
}

