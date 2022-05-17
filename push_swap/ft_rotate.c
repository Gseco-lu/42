/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:14:07 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/05 18:06:40 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_rotate(t_list *x)
{
	t_node	*tmp;
	t_node	*tmp1;
	t_node	*begin;
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
	set_pos(x);
}

void	ra(t_list *a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list *b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_list *a, t_list *b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}
