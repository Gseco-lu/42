/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:26:34 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/24 19:14:28 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	///ft_push_swap(argc, argv);
}

void print_list()
{
	t_stack *s;
	int size;
	
	while (s)
	{
		printf("nb: %i\n", s->nbr);
		size++;
		s = s->next;
	}
}
