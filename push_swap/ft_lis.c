/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:17:28 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/04/07 19:30:25 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sequence(t_list *l)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		i;

	i = 0;
	tmp = l->begin;
	tmp1 = tmp->next;
	while (tmp != l->end)
	{
		while (tmp1)
		{
			if (tmp1->nbr > tmp->nbr)
			{
				i++;
			}
			tmp1 = tmp1->next;
		}
		tmp->sequence = i;
		tmp = tmp->next;
		tmp1 = tmp->next;
		i = 0;
	}
}

void	ft_lis(t_list *l)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	t_stack	*tmp2;
	t_stack	*tmp3;
	int		i;

	ft_sequence(l);
	tmp = l->begin->next;
	tmp1 = tmp->next;
	i = tmp->nbr;
	tmp2 = l->end;
	while (tmp != tmp2)
	{
		while (tmp1)
		{
			if (tmp1->nbr > tmp->nbr && i > tmp1->nbr)
			{
				tmp->sequence = tmp->sequence - 1;
			}
			if (tmp1->nbr > tmp->nbr)
				i = tmp1->nbr;
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
		tmp1 = tmp->next;
		/*if (tmp1->next->nbr == tmp2->nbr)
			tmp3 = tmp1;*/
	}
}
