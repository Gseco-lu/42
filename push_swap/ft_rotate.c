/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:34:49 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 20:34:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_rotate(t_list *x)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	t_stack	*begin;
	int		pos;

	if (x->size < 2)
		return ;
	tmp = x->begin;
	tmp1 = x->end;
	pos = x->end->pos;
	begin = x->begin->next;
	while (tmp->next != x->end)
	{
		tmp->pos = (tmp->pos) - 1;
		tmp = tmp -> next;
	}
	x->end->pos = x->end->pos - 1;
	x->end->next = x->begin;
	x->end = x->end->next;
	x->end->pos = pos;
	x->begin->next = 0;
	x->begin = begin;
	x->begin->pos = 0;
}

void	ra(t_list *a)
{
	ft_rotate(a);
	if (a->is_print)
		write(1, "ra\n", 3);
}

void	rb(t_list *b)
{
	ft_rotate(b);
	if (b->is_print)
		write(1, "rb\n", 3);
}

void	rr(t_list *a, t_list *b)
{
	ft_rotate(a);
	ft_rotate(b);
	if (a->is_print)
		write(1, "rr\n", 3);
}