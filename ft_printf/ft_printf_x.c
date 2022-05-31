/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:21:17 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/02/08 18:22:04 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned int n)
{
	int		size;
	char	*base;

	base = "0123456789abcdef";
	size = 0;
	if (n > 15)
	{
		size += ft_printf_x(n / 16);
		size += ft_printf_c(base[n % 16]);
	}
	else
		size += ft_printf_c(base[n]);
	return (size);
}
