/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:26:34 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/06 18:30:43 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	push_last_nbr(t_list *a, t_list *b)
{
	t_node	*s;
	t_node	*s1;
	t_node	*b1;

	s = a->begin;
	s1 = a->end;
	b1 = b->begin;
	while (s)
	{
		if (b1->nbr == lastone(a) && s->order == b1->order - 1)
		{
			rr_or_rrr(s, b1, a, b);
		}
		if (s1->nbr < b1->nbr && s->nbr > b1->nbr)
			rr_or_rrr(s, b1, a, b);
		s1 = s1->next;
		if (!s1)
			s1 = a->begin;
		s = s->next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;
	t_node	*s;
	t_node	*q;

	a = list_a();
	b = list_b();
	i = 0;
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
	while (b->begin->next)
	{
		ft_moves(a);
		ft_moves(b);
		ft_main_moves(a, b);
		s = a->begin;
		while (s)
		{
			printf("listA: %i\n", s->nbr);
			s = s->next;
		}
		s = b->begin;
		while (s)
		{
			printf("listB: %i\n", s->nbr);
			s = s->next;
		}
	}
	push_last_nbr(a, b);
	s = a->begin;
	put_smallest_on_top(list_a());
	s = a->begin;
	while (s)
	{
		printf("listA: %i\n", s->nbr);
		s = s->next;
	}
	s = b->begin;
	while (s)
	{
		printf("listB: %i\n", s->nbr);
		s = s->next;
	}
}
