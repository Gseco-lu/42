/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:05:08 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/11/10 20:19:29 by gseco-lu         ###   ########.fr       */
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
        data()->token = malloc(sizeof(t_token));
        while (input[i] && input[i] == ' ')
            i++;
        if (input[i] == '"')
        {
            while (input[i] && input[i] != '"')
            {
                token [ti][tj] = input[i];
                i += 1;
                tj += 1;
            }
        }
        else if (input[i] == 39)
        {
            while (input[i] && input[i] != 39)
            {
                token [ti][tj] = input[i];
                i += 1;
                tj += 1;
            }
        }
        else
        {
            while (input[i] && input[i] != ' ')
            {
                token [ti][tj] = input[i];
                i += 1;
                tj += 1;
            } 
        }
        token [ti][tj] = '\0';
        data()->token->word = token[ti];
        data()->token = data()->token->next;
    }




        
        if (input[i] == '"' || input[i] == ' ' || input[i] == 39)
        {
            if (token [ti][tj])
            {
                
                //data()->cmds[cmds_index] = token[ti];
                //data()->cmds[cmds_index][tj + 1] = '\0';
                data()->token = data()->token->next;
                ti += 1;
                tj = 0;
                i += 1;
            }
            if (input[i - 1] == '"' || input[i - 1] == 39)
                length = handle_quotes(input, i - 1);
                while (length--)
                {
                     data()->token = input[i];
                    tj++;
                }
                cmds_index += 1;
                
        }
    } 
}

t_node	*ft_allocate_token(int num)
{
	t_node	*x;

	x = malloc(sizeof(t_token));
	if (!x)
	{
		return (NULL);
	}
	x -> nbr = num;
	x -> next = NULL;
	return (x);
}