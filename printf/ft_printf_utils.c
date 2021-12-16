/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:30:05 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/12/16 16:49:38 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(const char *s)
{
	size_t	number_chars;

	number_chars = 0;
	while (s[number_chars] != 0)
		number_chars++;
	return (number_chars);
}

void	ft_putstr(void *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
}

void	ft_putnbr(int n)
{
	if (n != -2147483648)
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
		}
		if (n < 10)
			ft_putchar(n + '0');
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
	else
		ft_putstr("-2147483648");
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	myc;

	myc = c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == myc)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	return (0);
}

