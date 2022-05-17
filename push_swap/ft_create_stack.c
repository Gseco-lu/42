/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:34:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/17 19:53:19 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_node	*ft_allocate_node(int num)
{
	t_node	*x;

	x = malloc(sizeof(t_node));
	if (!x)
	{
		return (NULL);
	}
	x -> nbr = num;
	x -> next = NULL;
	return (x);
}

t_list	*list_a(void)
{
	static t_list	a;

	return (&a);
}

t_list	*list_b(void)
{
	static t_list	b;

	return (&b);
}

void	ft_create_stack(t_list *list_a, int argc, char **argv)
{
	int		i;
	int		v;

	i = 1;
	list_a->begin = 0;
	list_a->size = 0;
	while (i < argc)
	{
		v = ft_atol(argv[i]);
		if (i == 1)
		{
			list_a->begin = ft_allocate_node(v);
			list_a->begin->next = NULL;
			list_a->end = list_a->begin;
		}
		else
		{
			list_a->end->next = ft_allocate_node(v);
			list_a->end = list_a->end->next;
		}
		list_a->size++;
		i++;
	}
}

void	ft_lstclear(t_list *lst)
{
	t_node	*aux;

	if (!lst)
		return ;
	while (lst->begin)
	{
		aux = lst->begin->next;
		free(lst->begin);
		lst->begin = aux;
	}
	lst->begin = NULL;
}
