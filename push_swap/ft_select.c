/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:15:50 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/05 17:22:39 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_order(t_list *a)
{
	t_node	*x;
	t_node	*y;
	int		i;

	x = a->begin;
	y = a->begin->next;
	i = 0;
	while (x && y)
	{
		if (x->nbr > y->nbr)
		{
			i++;
		}
		y = y->next;
		if (!y)
		{
			y = a->begin;
			x->order = i;
			x = x->next;
			i = 0;
		}
	}
}

int	ft_right_order(t_list *a)
{
	t_node	*x;
	t_node	*y;

	x = a->begin;
	y = a->begin->next;
	while (x && y)
	{
		if (x->nbr > y->nbr)
		{
			return (0);
		}
		x = x->next;
		y = x->next;
	}
	return (1);
}

int	receive_pos(t_list *x, int y)
{
	t_node	*s;

	s = x->begin;
	while (s)
	{
		if (s->order == y)
		{
			return (s->pos);
		}
		else
			s = s->next;
	}
	return (0);
}
