/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:39:09 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/30 19:47:25 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_atoi(const char *str)
{
	long	number;
	int		i;
	int		symbol;

	i = 0;
	number = 0;
	symbol = 1;
	if (str[i] == '-')
	{
			symbol = -1;
			i++;
	}
	while (str[i])
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * symbol);
}

/*void	ft_push_swap(int argc, char **argv)
{
	ft_create_stack(argc, argv);
}*/
