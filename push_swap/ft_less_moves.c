/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_less_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:33:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/04/29 19:11:59 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_less_moves(t_list *a, t_list *b)
{
	t_stack	*q;
	int		i;
	int		b_moves;

	q = a->begin;
	i = 0;
	b_moves = 2147483647;
	while (q->pos < (a->size / 2))
	{
		if (q->next->order != q->order + 1)
			if ((ft_less_moves_b(b, q->nbr, q->next->nbr) < b_moves))
				b_moves = ft_less_moves_b(b, q->nbr, q->next->nbr);
		i++;
	}
}

int	ft_less_moves_b(t_list *b, int q, int w)
{
	t_stack	*s;
	int		i;

	i = 0;
	s = b->begin;
	while (s->pos < (b->size / 2))
	{
		if (s->nbr > q && s->nbr < w)
			return (i);
		i++;
	}
}

int	ft_moves(t_list *b, t_list *a)
{
	int		i;
	t_stack	*s;
	int		j;

	i = 0;
	j = 0;
	s = a->begin;
	if (a->size % 2 == 0)
		j = (a->size / 2);
	else
		j = (a->size / 2) + 1;
	while (i != j)
	{
		s->moves = i;
		i++;
		s = s->next;
	}
	while (s)
	{
		s->moves = j;
		i++;
		j--;
		s = s->next;
	}
}

//percorrer a stack A e procurar espacos para inserir um numero da B. Percorrer a stack B e enviar qual o numero que menor movimentos.
// de seguida procurar o proximo espaco na A e ver se ha algum numero na B que encaixe e que tenha menos movimentos que o anterior
