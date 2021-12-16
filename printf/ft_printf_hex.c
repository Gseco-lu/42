/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:31:44 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/12/16 16:31:09 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_re_address(unsigned long nb, int is_starting)
{
	char	*ptr;
	char	res;

	if ((void *)nb == NULL || nb == 0)
	{
		write(1, "0x0", 3);
		return ;
	}
	if (is_starting == 1)
		write(1, "0x", 2);
	if (nb >= 16)
	{
		ft_re_address(nb / 16, 0);
		nb = nb % 16;
	}
	if (nb > 9)
		res = 'a' + (nb - 10);
	else
		res = nb + '0';
	ptr = &res;
	write(1, ptr, 1);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbrhex_fd(unsigned int n, int fd)
{
	char	*base;
	char	x;

	base = "0123456789abcdef";
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 16)
		ft_putnbrhex_fd(n / 16, fd);
	x = base[n % 16];
	ft_putchar_fd(x, fd);
}

void	ft_putnbrupperhex_fd(unsigned int n, int fd)
{
	char	*base;
	char	x;

	base = "0123456789ABCDEF";
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 16)
		ft_putnbrupperhex_fd(n / 16, fd);
	x = base[n % 16];
	ft_putchar_fd(x, fd);
}
