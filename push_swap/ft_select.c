/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:15:50 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/29 18:18:56 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_select(t_list *a, t_list *b)
{
	t_stack	*s;
	t_stack	*q;

	s = a -> end;
	q = s->next;
	while (a != s)
	{
		if (a->end->nbr > a->begin->nbr > a->begin->next->nbr)
		{
			pa(a, b);
		}
		else
			ra(a);
	}
}

void	ft_b_to_a(t_list *a, t_list *b)
{
	while (b)
	{
		if (a->begin->nbr > b->begin->nbr > a->end->nbr)
			pb(a, b);
		else
			ra(a);
	}
}


