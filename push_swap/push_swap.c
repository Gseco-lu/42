/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:26:34 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/17 19:56:07 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_node	*s;

	a = list_a();
	b = list_b();
	b = malloc(sizeof(t_list));
	if (!b)
	{
		return (1);
	}
	b->begin = NULL;
	b->end = NULL;
	b->size = 0;
	if (ft_exceptions(argc, argv) == 0)
		return (0);
	ft_create_stack(a, argc, argv);
	ft_order(a);
	set_pos(a);
	main_aux(a, b, s);
}

void	main_aux(t_list *a, t_list *b, t_node *s)
{
	if (a->size == 3)
	{
		sort3(a);
	}
	else if (a->size == 5)
	{
		sort5(a, b);
	}
	put_smallest_on_top(list_a());
	set_pos(a);
	ft_lis(a);
	select_node(a);
	push_notlis_b(a, b);
	s = a->begin;
	ft_moves(a);
	while (b->begin)
	{
		ft_moves(a);
		ft_moves(b);
		ft_main_moves(a, b);
	}
	if (ft_right_order(a) != 1)
		put_smallest_on_top(a);
	ft_lstclear(a);
	free(b);
}
