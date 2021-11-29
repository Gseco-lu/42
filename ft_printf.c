/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:08:05 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/29 19:28:29 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*sentence;

	sentence = (char *)s;
	while (n > 0)
	{
		*sentence = '\0';
		sentence++;
		n--;
	}
}

int	ft_strlen(const char *s)
{
	size_t	number_chars;

	number_chars = 0;
	while (s[number_chars] != 0)
		number_chars++;
	return (number_chars);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*sentence;
	size_t			i;

	i = 0;
	sentence = (unsigned char *)b;
	while (i < len)
	{
		sentence[i] = c;
		i++;
	}
	return (sentence);
}

static	char	*strrev(char *s1)
{
	char	swp;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(s1);
	while (++i < len / 2)
	{
		swp = s1[i];
		s1[i] = s1[len - i - 1];
		s1[len - i - 1] = swp;
	}
	return (s1);
}

static	int	number_of_chars(int n)
{
	int	i;
	int	sign;

	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	else
		sign = 0;
	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i + sign);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*objs;

	objs = malloc(count * size);
	if (!objs)
		return (0);
	ft_bzero(objs, count * size);
	return (objs);
}

static	char	*handle_negatives(char *iter, int *n)
{
	if (*n == -2147483648)
	{
		ft_memset(iter++, '8', 1);
		*n = 214748364;
	}
	else
		*n *= -1;
	return (iter);
}

static	char	*check_sign(char *iter, int sign)
{
	if (sign == -1)
		ft_memset(iter++, '-', 1);
	return (iter);
}

char	*ft_itoa(int n)
{
	char	*res;
	char	*iter;
	int		sign;

	res = ft_calloc(number_of_chars(n) + 1, sizeof(char));
	if (!res)
		return (0);
	sign = 1;
	iter = res;
	if (n == 0)
		ft_memset(iter++, '0', 1);
	if (n < 0)
	{
		iter = handle_negatives(iter, &n);
		sign = -1;
	}
	while (n != 0)
	{
		ft_memset(iter++, (char)(n % 10) + '0', 1);
		n /= 10;
	}
	iter = check_sign(iter, sign);
	ft_memset(iter++, 0, 1);
	strrev(res);
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
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
				ft_putnbr(x);
				i = i + 2;
			}
			if (str[i + 1] == 's')
			{
			   	char *y = (va_arg(l, char *));
				ft_putstr(y);
				i = i + 2;
			}
			if (str[i + 1] == 'c')
			{
				int z = (va_arg(l, int));
				ft_putchar((char)z);
				i = i + 2;
			}
			if (str[i + 1] == '%')
			{
				ft_putchar('%');
				i = i + 2;
			}
			if (str[i + 1] == 'p')
			{
				char *q = (va_arg(l, char *));
				ft_putstr(*q);
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
	ft_printf("owjsoqdj %c ewj %% uh %p cw %d owdjo %s", 'n', "dwdw", 290207389, "dqodiodsaiod23981482ew");
}
