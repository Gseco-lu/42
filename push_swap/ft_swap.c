/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:28:07 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/29 18:24:20 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap(t_list *x)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	t_stack	*tmp3;

	tmp = x -> begin -> next;
	tmp2 = x -> begin;
	tmp3 = tmp -> next;
	x -> begin = tmp;
	x -> begin -> next = tmp2;
	tmp = x -> begin -> next;
	tmp -> next = tmp3;
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
