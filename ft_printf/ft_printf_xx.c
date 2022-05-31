/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:24:02 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/02/08 18:23:04 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_xx(unsigned int n)
{
	int		size;
	char	*base;

	base = "0123456789ABCDEF";
	size = 0;
	if (n > 15)
	{
		size += ft_printf_xx(n / 16);
		size += ft_printf_c(base[n % 16]);
	}
	else
		size += ft_printf_c(base[n]);
	return (size);
}
