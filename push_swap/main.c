/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:35:59 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 20:35:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*s;
	//int j;

	//list_a()->is_print = 1;
	list_b()->begin = NULL;
	list_b()->end = NULL;
	list_b()->size = 0;
	ft_exceptions(argc, argv);
	ft_create_stack(list_a(), argc, argv);
	print_list(list_a(), "A");
	//pa(list_a(), list_b());
	ft_order(list_a());
	//i = ft_lis(list_a());
	//ft_sequence(list_a());
	select_stack(list_a());
	i = ft_right_order(list_a());
	//printf("order: %i\n", list_a()->end->sequence);
	//printf("order: %i\n", list_a()->begin->next->sequence);
	//pa(list_a(), list_b());
	//printf("order: %i\n", i);
	s = list_a()->begin;
	printf("order: %i\n", i);
	while (s)
	{
		printf("order: %i||%i\n", s->stack , s->nbr);;
		s = s->next;
	}
	//printf("order: %i\n", list_a()->begin->stack);
	//printf("order: %i\n", list_a()->begin->next->stack);
	//printf("order: %i\n", list_a()->end->stack);
	//printf("isbefore: %i\n", list_a()->end->sequence);
	//printf("isfirst: %i\n", list_a()->end->first);
	//ft_select(list_a(), list_b());
	//print_list(list_a(), "A");
	//print_list(list_b(), "B");
	//list_a()->is_print = 0;
	//list_b()->is_print = 0;
	//ft_b_to_a(list_a(), list_b());
	//i = ft_exceptions(list_a());
	//if (i == 0)
	//printf("Error!\n");
	//j = ft_right_order(list_a());
	//if (j == 0)
	//printf("rightorder-Error!\n");
	//print_list(list_a(), "A");
	//print_list(list_b(), "B");
	//pb(list_a(), list_b());
	//print_list(list_a(), "A");
	//print_list(list_b(), "B");
	//if (argc && argv)
		//return (0);
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