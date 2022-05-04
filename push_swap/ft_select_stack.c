/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:27:18 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/04 19:59:38 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	select_stack(t_list *l)
{
	int		max;
	t_stack	*s;
	int		before;
	int		i;
	int		j;

	max = ft_lis(l);
	before = 2147483647;
	s = l->begin;
	i = 0;
	j = 2147483647;
	while (s)
	{
		s->stack = 1;
		s = s->next;
	}
	s = l->begin;
	select_stack_aux(s, max, before, l);
}

void	select_stack_aux(t_stack *s, int max, int before, t_list *l)
{
	int	i;
	int	j;

	i = 0;
	j = 2147483647;
	while (s && max != 0)
	{
		if ((s->sequence == max && s->nbr < before) && i < j)
		{
			s->stack = 0;
			before = s->nbr;
			max = max - 1;
			s = l->begin;
			j = i;
			i = -1;
		}
		s = s->next;
		i++;
	}
}
