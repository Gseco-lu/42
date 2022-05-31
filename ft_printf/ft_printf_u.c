/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:03:39 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/02/08 18:18:31 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_u(unsigned int n)
{
	int		size;

	size = 0;
	if (n < 10)
		size += ft_printf_c(n + '0');
	else
	{
		size += ft_printf_u(n / 10);
		size += ft_printf_u(n % 10);
	}
	return (size);
}
