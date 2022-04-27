/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:32:57 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 20:32:57 by marvin           ###   ########.fr       */
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
    return j;
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
	while (a)
	{
		if (a->stack != 0)
			pb(list_a(), list_b());
		else
			a = a->next;
	}
}