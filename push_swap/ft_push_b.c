/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:37:00 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/04 19:14:43 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_main_moves(t_list *a, t_list *b)
{
	t_stack	*s;
	t_stack	*s1;
	t_stack	*b1;

	s = a->begin;
	s1 = a->end;
	b1 = b->begin;
	while (select_moves(a, b) != b1->nbr)
	{
		b1 = b1->next;
	}
	while (s)
	{
		if (s1->nbr < b1->nbr && s->nbr > b1->nbr)
			rr_or_rrr(s, b1, a, b);
		if (s1 == a->end)
			s1 = a->begin;
		if (s1 != a->end)
			s1 = s1->next;
		s = s->next;
	}
}

void	rr_or_rrr(t_stack *s, t_stack *b1, t_list *a, t_list *b)
{
	if (s->moves > 0 && b1->moves > 0)
	{
		while (s->moves != 0 && b1->moves != 0)
		{
			rr(a, b);
			s->moves = s->moves - 1;
			b1->moves = b1->moves - 1;
		}
	}
	if (s->moves < 0 && b1->moves < 0)
	{
		while (s->moves != 0 && b1->moves != 0)
		{
			rrr(a, b);
			s->moves = s->moves + 1;
			b1->moves = b1->moves + 1;
		}
	}
	last_moves(s, a);
	last_moves(b1, b);
	pb(a, b);
}

void	last_moves(t_stack *s, t_list *a)
{
	while (s->moves != 0)
	{
		if (s->moves > 0)
		{
			ra(a);
			s->moves = s->moves - 1;
		}
		else
		{
			rra(a);
			s->moves = s->moves + 1;
		}
	}
}
