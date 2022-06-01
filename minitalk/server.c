/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:44:38 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/06/01 15:20:16 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signal)
{
	static char	c;
	static int	i;

	if (signal == SIGUSR1 || signal == SIGUSR2)
		c = ((signal - SIGUSR1) << i++) | c;
	if (i == 8)
	{
		write(1, &c, 1);
		if (c == '\0')
			write(1, "\n", 1);
		c = 0;
		i = 0;
	}
}

int	main(void)
{
	int		x;

	x = getpid();
	ft_printf("%d\n", x);
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while (1)
		pause();
}
