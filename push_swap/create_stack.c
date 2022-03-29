/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:34:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/29 15:37:19 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_stack	*ft_allocate_stack( int num)
{
	t_stack	*x;

	x = malloc(sizeof(t_stack));
	if (!x)
	{
		return (NULL);
	}
	x -> nbr = num;
	x -> next = NULL;
	return (x);
}

t_list *list_a(void)
{
	static t_list a;

	return (&a);
}

t_list *list_b(void)
{
	static t_list b;

	return (&b);
}

void	ft_create_stack(int argc, char **argv)
{
	int		i;
	t_list *list_a;

	i = 1;
	list_a->size = 0;
	while (i < argc)
	{
		if (i == 1)
		{
			list_a->begin = ft_allocate_stack(ft_atoi(argv[i]));
			list_a->begin->next = 0;
			list_a->end = list_a->begin;
		}
		else
		{
			list_a->end->next = ft_allocate_stack(ft_atoi(argv[i]));
			list_a->end = list_a->end->next;
		}
		list_a->size++; 
		i++;
	}
}

	