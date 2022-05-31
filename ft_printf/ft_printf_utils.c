/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:23:54 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/02/09 16:02:17 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	size_t	number_chars;

	number_chars = 0;
	while (s[number_chars] != 0)
		number_chars++;
	return (number_chars);
}

int	ft_putnbr(int n)
{
	int		size;

	size = 0;
	if (n == -2147483648)
		return (ft_printf_s("-2147483648"));
	if (n < 0)
	{
		size += ft_printf_c('-');
		n = -n;
	}
	if (n < 10)
		size += ft_printf_c(n + '0');
	else
	{
		size += ft_putnbr(n / 10);
		size += ft_putnbr(n % 10);
	}
	return (size);
}

char	*ft_strchr(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
