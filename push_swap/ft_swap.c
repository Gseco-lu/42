/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:35:34 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 20:35:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_push_swap.h"

void	ft_swap(t_list *x)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	t_stack	*tmp3;
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
	x->begin->pos = 0;
	tmp->pos = pos;
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