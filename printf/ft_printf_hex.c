/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:31:44 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/12/01 15:39:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_re_address(unsigned long int nb, int is_starting)
{
	char	*ptr;
	char	res;

	/*if (nb == NULL || nb == 0)
	{
		write(1, "0x0", 3);
		break ;
	}*/
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
