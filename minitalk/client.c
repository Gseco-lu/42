/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:44:31 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/24 19:56:08 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if (i & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
}

int	main(void)
{
	int		x;
	int		c;

	x = getpid();
	printf("%d\n", x);
	c = 128;
	print_bits(c);
	//printf("%d\n", x);
}