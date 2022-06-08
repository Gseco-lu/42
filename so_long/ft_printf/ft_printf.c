/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:06:11 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/06/08 20:15:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		size;
	int		i;
	va_list	list;

	size = 0;
	i = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_strchr1("cspdiuxX", str[++i]))
			{
				size += ft_printf_selection(list, str[i++]);
				continue ;
			}
		}
		size += ft_printf_c(str[i++]);
	}
	va_end(list);
	return (size);
}

int	ft_printf_selection(va_list list, char c)
{
	if (c == 'c')
		return (ft_printf_c(va_arg(list, int)));
	else if (c == 's')
		return (ft_printf_s(va_arg(list, char *)));
	else if (c == 'p')
		return (ft_printf_p(va_arg(list, unsigned long), 1));
	else if (c == 'd' || c == 'i')
		return (ft_printf_d(va_arg(list, int)));
	else if (c == 'u')
		return (ft_printf_u(va_arg(list, unsigned int)));
	else if (c == 'x')
		return (ft_printf_x(va_arg(list, unsigned int)));
	return (ft_printf_xx(va_arg(list, unsigned int)));
}
