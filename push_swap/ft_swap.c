/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:28:07 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/12 16:33:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap(t_list *x)
{
	t_node	*tmp;
	t_node	*tmp2;
	t_node	*tmp3;
	int		pos;

	if (x->size < 2)
		return ;
	tmp = x->begin->next;
	pos = x->begin->next->pos;
	tmp2 = x->begin;
	tmp3 = tmp->next;
	x->begin = tmp;
	x->begin->next = tmp2;
	tmp = x->begin->next;
	tmp->next = tmp3;
	set_pos(x);
}

void	sa(t_list *a)
{
	ft_swap(a);
	write (1, "sa\n", 3);
}

void	sb(t_list *b)
{
	ft_swap(b);
	write (1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	ft_swap(a);
	ft_swap(b);
	write (1, "ss\n", 3);
}
