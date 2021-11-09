/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:11:15 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/03 19:46:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_char_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	start;
	size_t	final;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return (0);
	final = ft_strlen(s1);
	while (s1[start] && ft_char_set(s1[start], set))
		start++;
	while (final != start && ft_char_set(s1[final - 1], set))
		final--;
	ptr = malloc((final - start + 1) * (sizeof(char)));
	if (!ptr)
		return (NULL);
	i = 0;
	while (start < final)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
