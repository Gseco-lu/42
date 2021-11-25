/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:36:19 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/20 16:19:22 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	q;

	i = 0;
	while (*(str + i) != '\0')
	{
		q = *(str + i);
		if (q == '\0')
			break ;
		else if (q >= ' ' && q != 127)
			ft_putchar(q);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[q / 16]);
			ft_putchar("0123456789abcdef"[q % 16]);
		}
		i++;
	}
}
