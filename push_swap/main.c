/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:26:34 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/04/29 17:32:16 by gseco-lu         ###   ########.fr       */
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
	if (ft_exceptions(argc, argv) == 0)
		return ;
	ft_create_stack(list_a(), argc, argv);
	print_list(list_a(), "A");
	ft_lis(list_a());
	//pa(list_a(), list_b());
	/*ft_order(list_a());
	if (ft_right_order(list_a()) == 1)
		return ;
	pushb_not_lis(list_a());
	//i = ft_lis(list_a());
	//ft_sequence(list_a());
	if (ft_right_order(list_a()) == 1)
		return ;
	select_stack(list_a());
	ra(list_a());
	s = list_a()->begin;
	while (s != list_a()->end)
	{
		if (s->stack != 0)
		{
			pa(list_a(), list_b());
		}
		else
		{
			s = s->next;
			ra(list_a);
		}
	}
	ra(list_a());
	i = ft_right_order(list_a());
	//printf("order: %i\n", list_a()->end->sequence);
	//printf("order: %i\n", list_a()->begin->next->sequence);
	//pa(list_a(), list_b());
	//printf("order: %i\n", i);
	s = list_a()->begin;
	printf("order: %i\n", i);*/
	s = list_a()->begin;
	while (s)
	{
		printf("order: %i||%i\n", s->sequence, s->nbr);
		s = s->next;
	}

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