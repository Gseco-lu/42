/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:17:28 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/31 20:19:55 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_lis(t_list *a)
{
	t_node	*x;
	t_node	*y;
	t_stack	*l;
	int		i;

	x->len = a->size;
	i = 0;
	l = a->begin;
	while (l)
	{
		x->val = l->nbr;
		if (l->next->nbr < l->nbr)
			x->val = l->next->nbr;
			
		l = l->next;
		i++;
	}
		if (x->nbr < y->nbr)
		{
			i++;
		}
		if (!(y->next))
		{
			if (x->before >= x->nbr || before == -2147483647)
				x->first = 1;
			x = x->next;
			y = a->begin;
			before = -2147483647;
		}
		y = y->next;
	}
}
