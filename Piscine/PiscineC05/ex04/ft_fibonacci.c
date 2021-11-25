/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:48:52 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/25 15:48:07 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;
	int	res1;
	int	x;

	res = 1;
	res1 = 1;
	x = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (index > 2)
	{
		x = res1;
		res1 = res + x;
		res = x;
		index--;
		ft_fibonacci(index);
	}
	return (res1);
}
