/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:57:21 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/29 16:06:43 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_reverse_rotate(t_list *x)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*tmp;

	first = x -> begin;
	tmp = x;
	last = x -> end;
	while (tmp -> next != x -> end)
	{
		tmp = tmp -> next;
	}
	x -> begin = last;
	x -> begin -> next = first;
	x -> end = tmp;
	x -> end -> next = NULL;
}

void	rra(t_list *a)
{
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list *b)
{
	ft_reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list *a, t_list *b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	write(1, "rrr\n", 4);
}
