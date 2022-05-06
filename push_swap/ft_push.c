/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:06:51 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/06 16:08:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push(t_list *a, t_list *b)
{
	t_node	*tmpa;
	t_node	*tmpb;

	tmpa = a->begin->next;
	tmpb = a->begin;
	a->begin = tmpa;
	tmpa = b -> begin;
	b->begin = tmpb;
	b->begin->next = tmpa;
	a->size = a->size - 1;
	b->size++;
	if (!b->end)
		b->end = b -> begin;
	if (a->size == 0)
		a->begin = NULL;
	set_pos(a);
	set_pos(b);
}

void	set_pos(t_list *l)
{
	t_node	*tmp;
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
