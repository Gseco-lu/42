/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:15:50 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/31 19:43:31 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_select(t_list *a, t_list *b)
{
	while (a->begin->nbr != a->begin->next->before)
	{
		if (a->begin->nbr < a->begin->next->nbr)
		{
			rra(a);
			pa(a, b);
		}
		else
			rra(a);
	}
}

void	ft_b_to_a(t_list *a, t_list *b)
{
	while (b->begin->next)
	{
		if (a->begin->before == b->begin->nbr && b->begin->first == 0)
			pb(a, b);
		else
			rb(b);
	}
	if (b->begin->first == 0 && a->begin->before == b->begin->nbr)
		pb(a, b);
	else
		rra(a);
}

void	ft_before(t_list *a)
{
	t_stack	*x;
	t_stack	*y;
	int		before;

	x = a->begin;
	y = a->begin->next;
	before = -2147483647;
	while (x && y)
	{
		if (before < y->nbr && y->nbr < x->nbr)
		{
			before = y->nbr;
			x->first = 0;
		}
		x->before = before;
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

int	ft_exceptions(t_list *a)
{
	t_stack	*x;
	t_stack	*y;

	x = a->begin;
	y = a->begin->next;
	while (x && y)
	{
		if (x->nbr == y->nbr)
			return (0);
		else
		{
			if (!(y->next))
			{
				x = x->next;
				y = x->next;
			}
			else
				y = y->next;
		}
	}
	return (1);
}

int	ft_right_order(t_list *a)
{
	t_stack	*x;
	t_stack	*y;

	x = a->begin;
	y = a->begin->next;
	while (x && y)
	{
		if (x->nbr > y->nbr)
		{
			return (0);
		}
		x = x->next;
		y = x->next;
	}
	return (1);
}
