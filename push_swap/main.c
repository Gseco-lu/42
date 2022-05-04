/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:26:34 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/04 19:40:06 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_list	*a;

	list_b()->begin = NULL;
	list_b()->end = NULL;
	list_b()->size = 0;
	if (ft_exceptions(argc, argv) == 0)
		return (0);
	ft_create_stack(list_a(), argc, argv);
	ft_lis(list_a());
	ft_order(list_a());
	select_stack(list_a());
	push_notlis_b(list_a(), list_b());
	while (list_b()->begin)
	{
		ft_moves(list_a());
		ft_moves(list_b());
		ft_main_moves(list_a(), list_b());
	}
	put_smallest_on_top(list_a());
}
