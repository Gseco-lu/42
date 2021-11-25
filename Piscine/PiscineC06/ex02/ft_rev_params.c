/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:16:24 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/27 15:35:37 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_params(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*ptr;

	i = argc - 1;
	while (i >= 1)
	{
		ptr = argv[i];
		ft_rev_params(ptr);
		i--;
	}
}
