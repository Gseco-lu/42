/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:14:07 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/24 19:07:13 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_rotate(t_list *x)
{
	t_stack	*tmp;

	tmp = x->begin->next;
	x->end->next = x->begin;
	x->end = x->end->next;
	x->begin->next = 0;
	x->begin = tmp;
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
