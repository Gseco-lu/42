/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:44:31 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/31 19:18:09 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	long	number;
	long	i;
	int		symbol;

	symbol = 1;
	i = 0;
	number = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			symbol = -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
		number = number * 10 + (str[i++] - '0');
	return (number * symbol);
}

void	signal_handler_sigusr(int *x, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (x[i] == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(600);
		i--;
	}
}

void	send_bits(unsigned char octet, int pid)
{
	int	i;
	int	j;
	int	x[8];

	i = 128;
	j = 0;
	while (i > 0)
	{
		if (i & octet)
			x[j] = 1;
		else
			x[j] = 0;
		j++;
		i >>= 1;
	}
	x[j] = '\0';
	signal_handler_sigusr(x, pid);
}

int	main(int argc, char **argv)
{
	int		x;
	int		c;
	char	*s;

	c = 0;
	s = "invalid arguments!";
	if (argc == 1)
	{
		printf("%s\n", s);
		return (0);
	}
	x = ft_atoi(argv[1]);
	if (argc == 2)
	{
		while (s[c])
		{
			send_bits(s[c], x);
			c++;
		}
		return (0);
	}
	while (argv[2][c])
	{
		send_bits(argv[2][c], x);
		c++;
	}
	send_bits('\n', x);
}
