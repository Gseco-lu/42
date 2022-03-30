/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:06:51 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/30 17:32:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push(t_list *a, t_list *b)
{
	t_stack	*tmpa;
	t_stack	*tmpb;

	tmpa = a->begin->next;
	tmpb = a -> begin;
	a -> begin = tmpa;
	tmpa = b -> begin;
	b->begin = tmpb;
	b->begin->next = tmpa;
	b -> begin = tmpb;
}

void	pa(t_list *a, t_list *b)
{
	ft_push(a, b);
	write (1, "pa\n", 3);
}

void	pb(t_list *a, t_list *b)
{
	ft_push(b, a);
	write (1, "pb\n", 3);
}
