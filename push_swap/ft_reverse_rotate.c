/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:34:33 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 20:34:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_reverse_rotate(t_list *x)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*tmp;
	int		pos;

	first = x -> begin;
	tmp = x -> begin;
	last = x -> end;
	pos = last -> pos;
	if (x->size < 2)
		return ;
	while (tmp -> next != x -> end)
	{
		tmp->pos = (tmp->pos) + 1;
		tmp = tmp -> next;
	}
	x -> begin = last;
	x -> begin -> pos = 0;
	x -> begin -> next = first;
	x -> end = tmp;
	x -> end -> pos = pos;
	x -> end -> next = NULL;
}

void	rra(t_list *a)
{
	ft_reverse_rotate(a);
	if (a->is_print)
		write(1, "rra\n", 4);
}

void	rrb(t_list *b)
{
	ft_reverse_rotate(b);
	if (b->is_print)
		write(1, "rrb\n", 4);
}

void	rrr(t_list *a, t_list *b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	if (a->is_print)
		write(1, "rrr\n", 4);
}