/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:04:28 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/25 16:14:26 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_params(char *str)
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
	write (1, "\n", 1);
}

int	main(int argc, char	**argv)
{
	int		i;
	char	*ptr;

	i = 1;
	while (i < argc)
	{
		ptr = argv[i];
		ft_print_params(ptr);
		i++;
	}
}
