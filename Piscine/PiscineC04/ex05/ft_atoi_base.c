/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:44:12 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/22 15:57:41 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi_base(char *str, char *base)
{
	int	j;
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (base_condition(base) == 1)
		{
			j = ft_atoi(str[i]);
		}
		if (base == 0)
			return (0);
	}
	return (ft_putnbr_base(j, base));
}
