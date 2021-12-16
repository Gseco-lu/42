/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:08:05 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/12/16 16:33:17 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf_hex.c"
#include <stdio.h>
#include "ft_conversion_int.c"


int ft_printf(const char *str, ...)
{
	va_list	l;
	int		i;

	i = 0;
	va_start(l, str);
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			if (ft_strchr("dcxXu", str[i + 1]))
			{
				int x = va_arg(l, int);
				ft_conversion_int(str[i + 1], x);
			}
			if (str[i + 1] == 's')
			{
			   	char *y = (va_arg(l, char *));
				ft_putstr(y);
			}
			if (str[i + 1] == '%')
				ft_putchar('%');
			if (str[i + 1] == 'p')
			{
				void *q = (va_arg(l, void *));
				ft_re_address(((unsigned long)q), 1);
			}
			i = i + 2;
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
	char *ptr3;
	ptr3 = 0;
	char *ptr4 = "dded45wfwf43653ioewo";
	ft_printf("owj%xsoqdj %c ewj %% wdehh %p c%pw %d owdjo %s  %X  %u\n", -3284824, 'n', ptr3, ptr4, 290207389, "dqodiodsaiod23981482ew", 5555, 737372);
	printf("owj%xsoqdj %c ewj %% wdeh %p c%p w %d owdjo %s  %X  %u\n", -3284824, 'n', ptr3, ptr4, 290207389, "dqodiodsaiod23981482ew", 5555, 737372);

}
