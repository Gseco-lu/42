/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:43:12 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/07 17:43:12 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_conv_base(unsigned long long n, char *base, unsigned long long base_size)
{
	int	count;

	count = 0;
	if (n >= base_size)
		count = ft_conv_base(n / base_size, base, base_size);
	count += ft_putchar(base[n % base_size]);
	return (count);
}

int	ft_strlen(const char *s)
{
	int	number_chars;

	number_chars = 0;
	while (s[number_chars] != 0)
		number_chars++;
	return (number_chars);
}