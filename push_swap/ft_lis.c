/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:17:28 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/12 20:09:06 by gseco-lu         ###   ########.fr       */
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

int	sequence_size(t_list *a)
{
	t_node	*s;
	int		counter;

	s = a->begin;
	counter = 0;
	while (s)
	{
		if (s->stack == 0)
			counter++;
		s = s->next;
	}
	return (counter);
}

void	push_notlis_b(t_list *a, t_list *b)
{
	t_node	*s;
	int		i;
	int		amount;

	a->begin->stack = 0;
	i = sequence_size(a);
	amount = 150;
	if (list_a()->size < 250)
		amount = 60;
	while (list_a()->size > i)
	{
		if (a->begin->stack != 0 && a->begin->order > (list_a()->size - amount))
			pb(a, b);
		else
			ra(a);
	}
	return ;
}
