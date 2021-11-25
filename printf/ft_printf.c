/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:08:05 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/25 17:33:47 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <unistd.h>

int	ft_strlen(const char *s)
{
	size_t	number_chars;

	number_chars = 0;
	while (s[number_chars] != 0)
		number_chars++;
	return (number_chars);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr (nb / 10);
		ft_putchar ('8');
	}
	else if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

int	ft_strlen1(int s)
{
	int	number_chars;

	number_chars = 0;
	while ((s / 10) != 0)
		number_chars++;
	number_chars++;
	return (number_chars);
}

int ft_printf(char *str, ...)
{
	va_list	l;
	int		i;
	int 	num_args;
	int		linelen;

	i = 0;
	va_start(l, str);
	linelen = ft_strlen(str);
	while (i < linelen)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'd')
			{
				int x = va_arg(l, int);
				int y = ft_strlen1(x);
				ft_putnbr(x);
				i = i + 2;
			}
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	va_end(l);
	return (0);
}

int main()
{
	ft_printf("owjsoqdjewjuhcw %d owdjo", 5);
}
