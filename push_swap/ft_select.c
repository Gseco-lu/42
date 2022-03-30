/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:15:50 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/30 21:17:56 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_select(t_list *a, t_list *b)
{
	t_stack	*s;
	t_stack	*q;

	s = a -> end;
	q = s -> next;
	while (a->begin != s)
	{
		if (a->end->nbr > a->begin->nbr < a->begin->next->nbr)
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
		if (a->before == b->begin->nbr)
			pb(a, b);
		else
			rra(a);
	}
}
void	ft_before(t_list *a, t_list *b)
{
	t_stack	*x;
	t_stack	*y;
	int		i;
	int		j;

	x = a->begin;
	y = a->begin->next;
	i = 0;
	j = 0;
	if (x->nbr > 0 && y->nbr > 0 || x->nbr < 0 && y->nbr < 0)
		j = (x->nbr) - (y->nbr);
	else
		j = (x->nbr) + (y->nbr); 
	while (x && y)
	{
		if (x->nbr > 0 && y->nbr > 0 || x->nbr < 0 && y->nbr < 0)
		{
			i = (x->nbr) - (y->nbr);
			if (i < j)
				j = i;
		}
		else
		{
			i = (x->nbr) + (y->nbr);
			if (i < j)
				j = i;
		}
		if (!(y->next))
		{
			x->before = j;
			x = x->next;
			y = x->next;
		}
		else
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
