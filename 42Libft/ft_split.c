/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:07:50 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/03 19:07:53 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*ft_strcpy(char *dest, char *src, int j, int i)
{
	int	k;

	k = 0;
	while (j != i)
		dest[k++] = src[j++];
	dest[k] = '\0';
	return (dest);
}

static char	*ft_strdup1(char *src, int j, int i)
{
	char	*ptr;

	ptr = (char *) malloc((i - j + 1) * sizeof(char));
	if (ptr == 0)
		return (0);
	ft_strcpy(ptr, src, j, i);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		x;

	i = 0;
	x = 0;
	if (!s)
		return (0);
	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
			split[x++] = ft_strdup1((char *)s, j, i);
	}
	split[x] = 0;
	return (split);
}

/*int main(void)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split("ABC%DFG%HIJ%%J%%", '%');
	while(str[i])
		printf("%s\n", str[i++]);
}*/
