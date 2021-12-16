/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:13:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/12/16 16:33:19 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_utils.c"

void	ft_conversion_int(char x, int i)
{
	if (x == 'd')
		ft_putnbr(i);
	else if (x == 'c')
		ft_putchar((char)i);
	else if (x == 'x')
		ft_putnbrhex_fd(((unsigned long)i), 1);
	else if (x == 'X')
		ft_putnbrupperhex_fd(((unsigned int)i), 1);
	else if (x == 'u')
		ft_putnbr((unsigned int)i);
}
