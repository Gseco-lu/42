/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:31:59 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 20:31:59 by marvin           ###   ########.fr       */
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

void ft_create_stack(t_list *list_a, int argc, char **argv)
{
	int		i;
	int 	v;

	i = 1;
	list_a->begin = 0;
	list_a->size = 0;
	while (i < argc)
	{
		v = ft_atol(argv[i]);
		if (i == 1)
		{
			list_a->begin = ft_allocate_stack(v);
			list_a->begin->next = 0;
			list_a->end = list_a->begin;
		}
		else
		{
			list_a->end->next = ft_allocate_stack(v);
			list_a->end = list_a->end->next;
		}
		list_a->end->pos = list_a->size;
		list_a->size++; 
		i++;
	}
}