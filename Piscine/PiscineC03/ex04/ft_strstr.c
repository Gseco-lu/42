/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:59:47 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/09/23 15:49:51 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_getsize(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	if (*(to_find + i2) == '\0')
		return (str);
	if (ft_getsize(str) != 0)
	{
		while (*(str + i) != '\0')
		{
			if (*(str + i) == *(to_find + i2))
			{
				i2++;
				if (i2 == ft_getsize(to_find))
					return (&(*(str + i - i2 + 1)));
			}
			else
				i2 = 0;
			i++;
		}
		return (0);
	}
	return (0);
}
