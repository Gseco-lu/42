/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:36:11 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/02/08 18:08:58 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(unsigned long n, int is_starting)
{
	unsigned long	i;
	int				size;
	char			*base;

	i = n;
	size = 0;
	base = "0123456789abcdef";
	if (i == 0)
		return (ft_printf_s("0x0"));
	if (is_starting)
		size += ft_printf_s("0x");
	if (i > 15)
	{
		size += ft_printf_p(i / 16, 0);
		size += ft_printf_c(base[i % 16]);
	}
	else
		size += ft_printf_c(base[i]);
	return (size);
}
