/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_quotes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:49:53 by rade-sar          #+#    #+#             */
/*   Updated: 2022/11/10 18:48:53 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int    handle_quotes(char *c, int i)
{
    int     j;
    int     count:

    j = 0;
    count = 0;
    if (c[i++] == '"')
    {
        while (c[i])
        {
            while (c[i] != '"')
            {
                i += 1;
                count += 1;
            }
            if (c[i] == '"')
                return (count);
        }
    }
    if (c[i++] == 39)
    {
        while (c[i])
        {
            while (c[i] != 39 )
            {
                i += 1;
                count += 1;
            }
            if (c[i] == 39)
                return (count);
        }
    }
    return (count);
}