/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:05:08 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/11/10 18:59:19 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    parser(char *input)
{
    int     i;
    int     ti;
    int     tj;
    int     cmds_index;
    int     length;
    char    token[1000][1000];
    
    i = 0;
    tj = 0;
    ti = 0;
    cmds_index = 0;
    while (input[i])
    {
        while (input[i] != '"' || input[i] != ' ' || input[i] != 39)
        {
            token [ti][tj] = input[i];
            i += 1;
            tj += 1;
        }
        if (input[i] == '"' || input[i] == ' ' || input[i] == 39)
        {
            if (token [ti][tj])
            {
                data()->cmds[cmds_index] = token[ti];
                data()->cmds[cmds_index][tj + 1] = '\0';
                cmds_index += 1;
                ti += 1;
                tj = 0;
                i += 1;
            }
            if (input[i - 1] == '"' || input[i - 1] == 39)
                length = handle_quotes(input, i - 1);
                while (length--)
                {
                    data()->cmds[cmds_index][tj] = input[i];
                    tj++;
                }
                cmds_index += 1;
                
        }
    } 
}