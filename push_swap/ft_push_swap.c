/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:39:09 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/24 19:05:43 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_push_swap.h"

int	ft_atoi(const char *str)
{
	long	number;
	long	i;
	int		symbol;

	symbol = 1;
	i = 0;
	number = 0;
	while ((str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			symbol = -1;
	}
	i++;
	while (str[i] >= '0' && str[i] <= '9')
		number = number * 10 + (str[i++] - '0');
	return (number * symbol);
}

void	ft_push_swap(int argc, char **argv)
{
	ft_create_stack(argc, argv);
	ra(list_a());
	printf("%d\n", list_a()->begin->nbr);
}
