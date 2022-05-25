/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:44:31 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/25 19:31:44 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void	signal_handler_sigusr(int signal, int pid, unsigned char c)
{
	if (signal == SIGUSR2)
		kill(pid, SIGUSR2);
	else
		kill(pid, SIGUSR1);
}

int	send_bits(unsigned char octet, int pid)
{
	int	i;
	int	j;

	i = 128;
	j = 0;
	while (i > 0)
	{
		if (i & octet)
			signal_handler_sigusr(SIGUSR2, pid, octet);
		else
			signal_handler_sigusr(SIGUSR1, pid, octet);
		i >>= 1;
	}
}

int	main(int argc, char **argv)
{
	int		x;
	int		c;

	c = 0;
	x = ft_atoi(argv[1]);
	while (argv[2][c] != '\0')
	{
		send_bits(argv[2][c], x);
		c++;
	}
}
