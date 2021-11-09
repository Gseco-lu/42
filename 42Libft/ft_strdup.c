/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:08:27 by gseco-lu          #+#    #+#             */
/*   Updated: 2021/11/03 19:08:29 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*output;

	output = (char *)malloc(sizeof(*s1) * ft_strlen(s1) + 1);
	if (!output)
		return (0);
	ft_strlcpy(output, s1, ft_strlen(s1) + 1);
	output[ft_strlen(s1)] = '\0';
	return (output);
}
