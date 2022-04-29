/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:17:28 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/04/29 18:04:06 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int ft_lis(t_list *l)
{
    int 	j;
	t_stack	*q;
	int 	*lis;
	int		i;
	t_stack	*t;

	j = 0;
	i = 0;
	q = l->begin->next;
	t = l->begin;
	lis = (int*)malloc(sizeof(int) * (l->size));
	while (i < l->size)
	{
        lis[i] = 0;
		i++;
	}
	i = 1;
	/*while (q)
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
	}*/
	lis = lis_aux(l, q, t, lis);
	i = 0;
	j = -2147483647;
	while (i < l->size)
	{
		if (j < lis[i])
			j = lis[i];
		t->sequence = lis[i];
		t = t->next;
		i++;
	}
	free(lis);
	return (j);
}

int	*lis_aux(t_list *l, t_stack	*q, t_stack	*t, int *lis)
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

void	select_stack(t_list *l)
{
	int		max;
	t_stack	*s;
	int		before;
	int		i;
	int		j;

	max = ft_lis(l);
	before = 2147483647;
	s = l->begin;
	i = 0;
	j = 2147483647;
	while (s)
	{
		s->stack = 1;
		s = s->next;
	}
	s = l->begin;
	while (s && max != 0)
	{
		if ((s->sequence == max && s->nbr < before) && i < j)
		{
			s->stack = 0;
			before = s->nbr;
			max = max - 1;
			s = l->begin;
			j = i;
			i = 0;
		}
		s = s->next;
		i++;
	}
}

void	pushb_not_lis(t_list *l)
{
	t_stack	*a;

	a = l->begin->next;
	while (a != l->end)
	{
		if ((receive_pos(list_a(), 0)) > ((list_a()->size)/2))
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