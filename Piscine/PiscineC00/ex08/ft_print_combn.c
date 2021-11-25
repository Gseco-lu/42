/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:18:45 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/16 16:21:56 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(int n, int c[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(48 + c [i]);
		i++;
	}
	i = 0;
	while (i >= 0)
	{
		if (c [i] != 9 - (n - 1 - i))
		{
			break ;
		}
		i++;
	}
	if (i <= n - 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int n, int curr, int c [], int i2)
{
	int	i;
	int	max;

	if (curr == n)
	{
		ft_write (n, c);
	}
	else
	{
		max = 10 - (n - curr);
		i = i2 + 1;
		while (i <= max)
		{
			c [curr] = i;
			ft_print_combn_recursive(n, curr + 1, c, i);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	c [10];
	int	i;

	i = 0;
	while (i < n)
	{
		c [i] = 0;
		i++;
	}
	ft_print_combn_recursive(n, 0, c, -1);
}
