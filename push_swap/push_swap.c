/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:26:34 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/05 20:09:10 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;
	t_node	*s;
	t_node	*q;

	a = list_a();
	b = list_b();
	b = malloc(sizeof(t_list));
	if (!b)
	{
		return (NULL);
	}
	b->begin = NULL;
	b->end = NULL;
	b->size = 0;
	if (ft_exceptions(argc, argv) == 0)
		return (0);
	ft_create_stack(a, argc, argv);
	ft_order(a);
	put_smallest_on_top(list_a());
	set_pos(a);
	ft_lis(a);
	select_node(a);
	push_notlis_b(a, b);
	ft_moves(a);
	while (b->begin)
	{
		ft_moves(a);
		ft_moves(b);
		ft_main_moves(a, b);
	}
	put_smallest_on_top(list_a());
}
