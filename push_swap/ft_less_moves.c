/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_less_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:33:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/03 20:40:51 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

/*void	ft_less_moves(t_list *a, t_list *b)
{
	t_stack	*q;
	int		i;
	int		b_moves;

	q = a->begin;
	i = 0;
	b_moves = 2147483647;
	while (q->pos < (a->size / 2))
	{
		if (q->next->order != q->order + 1)
			if ((ft_less_moves_b(b, q->nbr, q->next->nbr) < b_moves))
				b_moves = ft_less_moves_b(b, q->nbr, q->next->nbr);
		i++;
	}
}

int	ft_less_moves_b(t_list *b, int q, int w)
{
	t_stack	*s;
	int		i;

	i = 0;
	s = b->begin;
	while (s->pos < (b->size / 2))
	{
		if (s->nbr > q && s->nbr < w)
			return (i);
		i++;
	}
}*/

void	ft_moves(t_list *l)
{
	int		i;
	t_stack	*s;

	i = 0;
	s = l->begin;
	while (i < l->size)
	{
		if (i < (l->size / 2))
		{
			s->moves = s->pos;
			i++;
			s = s->next;
		}
		else
		{
			s->moves = (s->pos - l->size) + 1;
			i++;
			s = s->next;
		}
	}
}

int	select_moves(t_list *a, t_list *b)
{
	t_stack	*b1;
	t_stack	*a1;
	t_stack	*a2;
	int		l_m;
	int		nbr;

	b1 = b->begin;
	a1 = a->begin->next;
	a2 = a->begin;
	nbr = 0;
	l_m = 2147483647;
	if (a->end->nbr < b->begin->nbr && b->begin->nbr < a->begin->nbr)
	{
		l_m = 0;
		return (b1->nbr);
	}
	nbr = get_number(b1, a, l_m, nbr);
	while (b1)
	{
		a1 = a->begin;
		a2 = a->end;
		b1 = b1->next;
		nbr = get_number(b1, a, l_m, nbr);
	}
}

int	get_number(t_stack *b1, t_list *a, int l_m, int nbr)
{
	t_stack	*a1;
	t_stack	*a2;

	a1 = a->begin;
	a2 = a->end;
	while (b1 && a1)
	{
		if (b1->order < a1->order && b1->order > a2->order)
		{
			if (move_count(a1->moves, b1->moves) < l_m)
			{
				l_m = move_count(a1->moves, b1->moves);
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
				return (b);
			else
				return (a);
		}
		else
			return (b + (a * (-1)));
	}
	else
	{
		if (b < 0)
			return (a + (b * (-1)));
		else
		{
			if (b > a)
				return (b);
			else
				return (a);
		}
	}		
}
//percorrer a stack A e procurar espacos para inserir um numero da B. Percorrer a stack B e enviar qual o numero que menor movimentos.
// de seguida procurar o proximo espaco na A e ver se ha algum numero na B que encaixe e que tenha menos movimentos que o anterior
