/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:53:41 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/27 15:34:39 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_program_name(char *str)
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
	(void) argc;
	ft_print_program_name(argv[0]);
}
