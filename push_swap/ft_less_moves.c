/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_less_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:33:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/16 18:35:50 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_moves(t_list *l)
{
	int		i;
	t_node	*s;

	i = 0;
	s = l->begin;
	set_pos(l);
	while (i < l->size)
	{
		if (i < ((l->size / 2) + 1))
		{
			s->moves = s->pos;
			i++;
			s = s->next;
		}
		else
		{
			s->moves = (s->pos - l->size);
			i++;
			s = s->next;
		}
	}
}

int	select_moves(t_list *a, t_list *b)
{
	t_node	*b1;
	t_node	*a1;
	t_node	*a2;
	int		l_m;
	int		nbr;

	b1 = b->begin;
	a1 = a->begin;
	a2 = a->end;
	nbr = 0;
	l_m = 2147483647;
	while (b1)
	{
		nbr = get_number(b1, a, &l_m, nbr);
		b1 = b1->next;
	}
	return (nbr);
}

int	get_number(t_node *b1, t_list *a, int *l_m, int nbr)
{
	t_node	*a1;
	t_node	*a2;
	int		biggest;

	a1 = a->begin;
	a2 = a->end;
	biggest = biggest_stack_number(a);
	while (a1)
	{
		if (b1->order < a1->order && b1->order > a2->order)
		{
			if (moves_count(a1->moves, b1->moves) < *l_m)
			{
				*l_m = moves_count(a1->moves, b1->moves);
				nbr = b1->nbr;
			}
		}
		else if (b1->nbr > biggest && a1->nbr == biggest)
		{
			if (moves_count(a1->moves, b1->moves) < *l_m)
			{
				*l_m = moves_count(a1->moves, b1->moves);
				nbr = b1->nbr;
			}
		}
		a1 = a1->next;
		if (a2 == a->end)
			a2 = a->begin;
		else
			a2 = a2->next;
	}
	return (nbr);
}

int	moves_count(int a, int b)
{
	if (a < 0)
	{
		if (b < 0)
		{
			if (b > a)
				return (-a);
			else
				return (-b);
		}
		else
			return (b - a);
	}
	else
	{
		if (b < 0)
			return (a - b);
		else
		{
			if (b > a)
				return (b);
			else
				return (a);
		}
	}
}

int	biggest_stack_number(t_list *l)
{
	t_node	*s;
	int		max;

	s = l->begin->next;
	max = l->begin->nbr;
	while (s)
	{
		if (s->nbr > max)
		{
			max = s->nbr;
		}
		s = s->next;
	}
	return (max);
}
