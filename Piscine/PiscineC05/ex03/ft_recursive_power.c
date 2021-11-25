/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:38:17 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/22 17:47:38 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	res;

	i = power;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	while (i != 0)
	{
		if (i > 1)
		{
			res = res * nb;
			i--;
			ft_recursive_power(nb, i);
		}
		else
			return (res * nb);
	}
	return (res);
}
