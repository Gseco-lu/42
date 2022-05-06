/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:17:28 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/05 19:03:28 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_lis(t_list *l)
{
	int		j;
	t_node	*q;
	int		*lis;
	int		i;
	t_node	*t;

	j = 0;
	i = 0;
	q = l->begin->next;
	t = l->begin;
	lis = (int *)malloc(sizeof(int) * (l->size));
	while (i < l->size)
	{
		lis[i] = 0;
		i++;
	}
	i = 0;
	lis = lis_aux(l, q, t, lis);
	j = ft_lis_aux_2(l, t, lis);
	free(lis);
	return (j);
}

int	ft_lis_aux_2(t_list *l, t_node *t, int *lis)
{
	int		i;
	int		j;
	t_node	*n;

	i = 0;
	j = -2147483647;
	n = l->begin;
	while (i < l->size)
	{
		if (j < lis[i])
			j = lis[i];
		n->sequence = lis[i];
		n = n->next;
		i++;
	}
	return (j);
}

int	*lis_aux(t_list *l, t_node *q, t_node *t, int *lis)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (q)
	{
		while (t != q)
		{
			if (q->nbr > t->nbr && lis[i] < lis[j] + 1)
			{
				lis[i] = lis[j] + 1;
			}
			j++;
			t = t->next;
		}
		j = 0;
		q = q->next;
		t = l->begin;
		i++;
	}
	return (lis);
}

void	push_notlis_b(t_list *a, t_list *b)
{
	t_node	*s;

	s = a->end;
	ra(a);
	while (a->begin != s)
	{
		if (a->begin->stack != 0)
			pa(a, b);
		else
			ra(a);
	}
	if (a->begin->stack != 0)
		pa(a, b);
}

void	put_smallest_on_top(t_list *l)
{
	t_node	*a;

	a = l->begin->next;
	while (a != l->end && list_a()->begin->order != 0)
	{
		if ((receive_pos(list_a(), 0)) > ((list_a()->size) / 2))
		{
			while (list_a()->begin->order != 0)
				rra(list_a());
		}
		else
		{
			while (list_a()->begin->order != 0)
				ra(list_a());
		}
	}
}
