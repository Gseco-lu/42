/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:13:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/12/16 17:16:03 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_utils.c"

void	ft_conversion_int(char x)
{
	int i;

	if (x == 'd')
	{
		i = va_arg(l, int);
		ft_putnbr(i);
	}
	else if (x == 'c')
	{
		i = va_arg(l, int);
		ft_putchar((char)i);
	}
	else if (x == 'x')
	{
		i = va_arg(l, int);
		ft_putnbrhex_fd(((unsigned long)i), 1);
	}
	else if (x == 'X')
	{
		i = va_arg(l, int);
		ft_putnbrupperhex_fd(((unsigned int)i), 1);
	}
	else if (x == 'u')
	{
		i = va_arg(l, int);
		ft_putnbr((unsigned int)i);
	}
}

void	ft_conversion_s%p(char x)
{
	char *y;
	void *q;

	if (str[i + 1] == 's')
	{
		y = (va_arg(l, char *));
		ft_putstr(y);
	}
	else if (str[i + 1] == '%')
		ft_putchar('%');
	else if (str[i + 1] == 'p')
	{
		q = (va_arg(l, void *));
		ft_re_address(((unsigned long)q), 1);
	}
}
