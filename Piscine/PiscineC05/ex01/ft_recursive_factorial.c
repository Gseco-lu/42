/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:43:54 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/25 15:47:43 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	res;

	i = nb;
	res = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb > 1)
	{
		while (i != 0)
		{
			res = res * i * (i - 1);
			if (i > 3)
			{
				i = i - 2;
				ft_recursive_factorial(i);
			}
			else
				return (res);
		}
		return (res);
	}
	else
		return (0);
}
