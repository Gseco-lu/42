/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:33:24 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 20:33:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_push_swap.h"

void	ft_push(t_list *a, t_list *b)
{
	t_stack	*tmpa;
	t_stack	*tmpb;

	tmpa = a->begin->next;
	tmpb = a->begin;
	a->begin = tmpa;
	tmpa = b -> begin;
	b->begin = tmpb;
	b->begin->next = tmpa;
	a->size = a->size - 1;
	b->size++;
	if (!b->end)
		b->end = b->begin;
	set_pos(a);
	set_pos(b);
}

void	set_pos(t_list *l)
{
	t_stack	*tmp;
	int		pos;

	tmp = l->begin;
	pos = -1;
	while (tmp)
	{
		tmp->pos = ++pos;
		tmp = tmp -> next;
	}
}

void	pa(t_list *a, t_list *b)
{
	if (a->size < 1)
		return ;
	ft_push(a, b);
	write (1, "pa\n", 3);
}

void	pb(t_list *a, t_list *b)
{
	if (b->size < 1)
		return ;
	ft_push(b, a);
	write (1, "pb\n", 3);
}