/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:16:57 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/25 15:30:29 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	calculatenewbase(int nbr, char *base, int size)
{
	int		n;
	char	a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= size)
		calculatenewbase(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int	validatebase(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (validatebase(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		calculatenewbase(nbr, base, s);
	}
}
