/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:37:00 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/17 17:15:27 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_main_moves_aux(t_list *a, t_list *b, t_node *b1, int select)
{
	int		biggest;
	t_node	*s;
	t_node	*s1;

	s = a->begin;
	s1 = a->end;
	biggest = biggest_stack_number(a);
	while (s)
	{
		if (s1->order < b1->order && s->order > b1->order)
			rr_or_rrr(s, b1, a, b);
		if (b1->nbr > biggest && s->nbr == biggest)
		{
			if (!s->next)
				rr_or_rrr(a->begin, b1, a, b);
			else
				rr_or_rrr(s->next, b1, a, b);
		}
		s1 = s1->next;
		if (!s1)
			s1 = a->begin;
		s = s->next;
	}
}

void	ft_main_moves(t_list *a, t_list *b)
{
	t_node	*s;
	t_node	*s1;
	t_node	*b1;
	int		select;
	int		biggest;

	s = a->begin;
	s1 = a->end;
	b1 = b->begin;
	select = select_moves(a, b);
	biggest = biggest_stack_number(a);
	while (select != b1->nbr)
		b1 = b1->next;
	ft_main_moves_aux(a, b, b1, select);
}

void	rr_or_rrr(t_node *s, t_node *b1, t_list *a, t_list *b)
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
	else if (s->moves < 0 && b1->moves < 0)
	{
		while (s->moves != 0 && b1->moves != 0)
		{
			rrr(a, b);
			s->moves = s->moves + 1;
			b1->moves = b1->moves + 1;
		}
	}
	last_moves_a(s, a);
	last_moves_b(b1, b);
	pa(a, b);
}

void	last_moves_a(t_node *s, t_list *a)
{
	while (s->moves != 0)
	{
		if (s->moves > 0)
		{
			ra(a);
			s->moves--;
		}
		else
		{
			rra(a);
			s->moves++;
		}
	}
}

void	last_moves_b(t_node *s, t_list *b)
{
	while (s->moves != 0)
	{
		if (s->moves > 0)
		{
			rb(b);
			s->moves--;
		}
		else
		{
			rrb(b);
			s->moves++;
		}
	}
}
