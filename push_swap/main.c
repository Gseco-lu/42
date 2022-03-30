/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:26:34 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/30 20:43:01 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	//int	i;
	//int j;

	//list_a()->is_print = 1;
	ft_create_stack(list_a(), argc, argv);
	print_list(list_a(), "A");
	//pa(list_a(), list_b());
	ft_select(list_a(), list_b());
	//i = ft_exceptions(list_a());
	//if (i == 0)
		//printf("Error!\n");
	//j = ft_right_order(list_a());
	//if (j == 0)
		//printf("rightorder-Error!\n");
	print_list(list_a(), "A");
	print_list(list_b(), "B");
	//pb(list_a(), list_b());
	print_list(list_a(), "A");
	print_list(list_b(), "B");
	if (argc && argv)
		return (0);
}

void	print_list(t_list *a, char *list)
{
	t_stack	*s;

	s = a->begin;
	printf("=========%s===========\n", list);
	while (s)
	{
		printf("nb: %i\n", s->nbr);
		s = s->next;
	}
	printf("=====================\n");
}
