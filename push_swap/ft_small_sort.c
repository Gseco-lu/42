/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:21:06 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/12 17:11:52 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sort3(t_list *a)
{
	int	s;
	int	s1;
	int	s2;

	ft_order(a);
	s = a->begin->next->order;
	s1 = a->end->order;
	s2 = a->begin->order;
	if (s == s2 + 1 || s1 == s + 1 || s1 + 1 == s2)
	{
		if (ft_right_order(a) == 1)
			return ;
		put_smallest_on_top(a);
	}
	else
	{
		if (a->begin->nbr > a->begin->next->nbr)
			sa(a);
		else
		{
			ra(a);
			sa(a);
		}
	}
}

void	sort5(t_list *a, t_list *b)
{
	while (a->size != 3)
	{
		pb(a, b);
	}
	sort3(a);
	while (b->begin)
	{
		ft_moves(a);
		ft_moves(b);
		ft_main_moves(a, b);
	}
	put_smallest_on_top(a);
}